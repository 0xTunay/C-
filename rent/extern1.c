#include <stdio.h>
 
extern char message[];      // переменная message из файла main.c
void print(void);           // функция print из main.c
int sum(int, int);          // функция sum из main.c
 
int main(void)
{
    // выводим на консоль внешнюю переменную message
    printf("%s \n", message);
    // вызываем внешнюю функцию print
    print();
    // вызываем другую внешнюю функцию - sum
    printf("46666 + 4445 = %d \n", sum(5875, 654));
    return 0;
}

// appp c naxiy 
// pizdec naxui blyat 