
CC = gcc
FLAGS = -Wall -Werror -Wextra -std=c11
GCOV = --coverage
UNIT = unit_tests
STLIB = s21_smart_calc.a
OS = $(shell uname -s)

ifeq ($(OS), Darwin)
    LIBS := -lcheck
else
    LIBS := -lcheck_pic -lpthread -lrt -lm -lsubunit -g
endif

all: clean s21_smart_calc.a test

s21_smart_calc.a: build_s21_smart_calc

build_s21_smart_calc:
	$(CC) -c s21_smartcalc.c
	ar rcs $(STLIB) s21_*.o
	ranlib $(STLIB)

unit_tests.o:
	$(CC) $(FLAGS) -c unit_tests.c -lm

test: $(STLIB)
	$(CC) $(FLAGS) unit_tests.c $(STLIB) -o $(UNIT) $(LIBS)
	./$(UNIT)

gcov_report: $(STLIB) unit_tests.o
	$(CC) $(FLAGS) $(GCOV) unit_tests.o s21_smartcalc.c -o $(UNIT) $(LIBS)
	./$(UNIT)
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info
	open report/index.html

check: $(STLIB)
	

install:
	make clean
	mkdir build_calk
	cd cppfront && qmake && make && make clean && rm Makefile && cd ../ && mv cppfront/cppfront.app ./build_calk
open:
	cd build_calk && open restest.app

uninstall:
	rm -rf build_calk*

dvi:
	open dvi.md

dist:
	rm -rf Archive_SmartCalc_v1.0/
	mkdir Archive_SmartCalc_v1.0/
	mkdir Archive_SmartCalc_v1.0/src
	mv ./build_calk/restest.app Archive_SmartCalc_v1.0/src/
	tar cvzf Archive_SmartCalc_v1.0.tgz Archive_SmartCalc_v1.0/
	rm -rf Archive_SmartCalc_v1.0/

coverage:
	open report/index.html

clean:
	rm -rf *.o *.a *.gc* *.info test report *dSYM $(UNIT) CPPLINT.cfg Archive_SmartCalc_v1.0 *tgz build_calk

g: clean
	git add .
	git commit -m"develop-s21_smartcalc.c"
	git push origin leftrana