#include <stdio.h>
int main(void)
{
    int x = 212;
    char y = 'Hello wrold';
    float z = 3.14;

    void *point;

    point = &x;
    printf("%d\n", *(int *)point);
    point = &y;
    printf("%c\n", *(char *)point);
    point = &z;
    printf("%.2f\n",*(float*)point);
    return 0;
}