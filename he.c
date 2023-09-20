#include <stdio.h>
int main(void)
{
    int x = 10;
    char c = 'g';
    float y = 2.40;

    void *pointer;
    pointer = &x;
    printf("x = %.2d\n",*(int *)pointer);
    pointer = &c;
    printf("x = %c\n",*(char *)pointer);
    pointer = &y;
    printf("x = %.2f\n",*(float *)pointer);

    return 0;
}