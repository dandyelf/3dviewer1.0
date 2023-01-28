CC = gcc
FLAGS = -Wall -Werror -Wextra -std=c11
GCOV = --coverage
UNIT = unit_tests
STLIB = s21_viewer.a
OS = $(shell uname -s)

ifeq ($(OS), Darwin)
    LIBS := -lcheck 
	APPLICATION = 3dviewer.app 
	OPEN = open
else
    LIBS := -lcheck_pic -lrt -lpthread -lsubunit -lm -g
	APPLICATION = 3dviewer
	OPEN = ./
endif

all: clean s21_viewer.a test

s21_viewer.a: build_s21_viewer

build_s21_viewer:
	$(CC) -c source_code/s21_viewer.c source_code/aff_transformation.c
	ar rcs $(STLIB) s21_*.o aff*.o
	ranlib $(STLIB)

unit_tests.o:
	$(CC) $(FLAGS) -c source_code/3DViewer_test.c

test: $(STLIB)
	$(CC) $(FLAGS) source_code/3DViewer_test.c $(STLIB) -o $(UNIT) $(LIBS)
	./$(UNIT)

gcov_report: $(STLIB) unit_tests.o
	$(CC) $(FLAGS) $(GCOV) 3DViewer_test.o source_code/s21_viewer.c source_code/aff_transformation.c -o $(UNIT) $(LIBS)
	./$(UNIT)
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info
	open report/index.html

clang:
	cp ../materials/linters/.clang-format ./source_code
	clang-format -n source_code/*.c source_code/*.cpp
	rm source_code/.clang-format

install:
	make clean
	mkdir 3dviewer
	cd source_code && qmake && make && make clean && rm Makefile && cd ../ && mv source_code/$(APPLICATION) ./3dviewer
open:
	cd 3dviewer && $(OPEN) $(APPLICATION)

uninstall:
	rm -rf 3dviewer

dvi:
	open dvi.html

dist:
	rm -rf Archive_3dviewer1.0/
	mkdir -p Archive_3dviewer1.0/
	mv ./3dviewer/$(APPLICATION) Archive_3dviewer1.0/src/
	tar cvzf Archive_3dviewer1.0.tgz Archive_3dviewer1.0/
	rm -rf Archive_3dviewer1.0/

coverage:
	open report/index.html

clean:
	rm -rf *.o *.a *.gc* *.info test report *dSYM $(UNIT) Archive_3dviewer1.0 *tgz 3dviewer
