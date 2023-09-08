#include <stdio.h>
#include <stdbool.h> // on bool 
int main(void)
{
    short a = 0;
    a = 5; 
    float x, y, res;

    scanf("%f", &x);
    scanf("%f", &y);

    res = x*y;
    printf("result: %.2f\n", res);


    char s = 'S';
    printf("%c", s);
    // bool isHasCar = true;
    // // -32 700 --- 32 768 
    // short s = 6456;
    // // 0 --- 64 000
    // unsigned short a = 5;
    // // -2 млн --- 2 млн
    // int num_first;
    // // 0 --- 4000
    // unsigned int = 5;
    // //
    // long a2 = 5;
    // unsigned long a3 = 5;

    // long long a4 = 5;

    // unsigned long long a5 = 6;
    // num_first = 4;

    // int x = 11, y = 10, res;
    // x *= 5; // умножение x на 5

    // float a6 = 4.5f;
    // double a7 = 5.1234567890987654;
    // // long double  еще больше чем double

    // char sym = '';
    // res = x * y;
  
    // printf("hello wrold: %d",res);
    return 0;
}