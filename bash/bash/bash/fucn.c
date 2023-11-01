#include <stdio.h>


// void hello()
// {
//     printf("hello\n");
// }
// void goodbye()
// {
//     printf("goodbye\n");
// }
// int main(void)
// {
//     // определяю указатель на функцию
//     void (*massage) (void);

//     massage = hello; // указываю указательно на функцию hello
//     massage(); // вызываю функцию
//     massage = goodbye; // указывает на функцию goodbuy
//     massage(); // вызываем функцию
//     return 0;
// }

int add(int x, int y)
{
    printf("x + y = %d\n",x + y);
}
int subtrach(int x, int y)
{
    printf("x - y = %d\n",x - y);
}
int multiply(int x, int y)
{
    printf("x * y = %d\n",x * y);
}
int main(void)
{
    int a = 10;
    int b = 5;

    void (*operation[3])(int, int) = {add, subtrach, multiply};

int leght = sizeof(operation)/sizeof(operation[0]);

for(int i=0; i < leght; i++)
{
        operation[i](a, b);    // вызов функции по указателю
}

}