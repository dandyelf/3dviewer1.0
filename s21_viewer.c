#include <stdio.h>

int file_work(char * str);

int main(int argc, char *argv[]) {
    printf("%d %s \n", argc, argv[1]);
    file_work(argv[1]);
    return 0;
}

int file_work(char * str) {
  char buffer[100];
    FILE * ptrFile = fopen(str , "r");
    if (ptrFile == NULL) perror ("Ошибка открытия файла");
    else{
      while ( !feof(ptrFile) ) {                               // пока не конец файла
        if ( fgets(buffer , 100 , ptrFile) != NULL )         // считать символы из файла
            fputs(buffer, stdout);                           // вывод на экран
      }
      fclose (ptrFile);                                      // закрыть файл
    }
    return 0;
}
