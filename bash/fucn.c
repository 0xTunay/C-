#include <stdio.h>


void hello()
{
    printf("hello\n");
}
void goodbye()
{
    printf("goodbye\n");
}
int main(void)
{
    // определяю указатель на функцию
    void (*massage) (void);

    massage = hello; // указываю указательно на функцию hello
    massage(); // вызываю функцию
    massage = goodbye; // указывает на функцию goodbuy
    massage(); // вызываем функцию
    return 0;
}