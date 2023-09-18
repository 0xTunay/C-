#include <stdio.h>
int main(void)
{
    int num = 116;
    int *p_num = &num;
    printf("%d\n",*p_num);

    *p_num = 117;

    printf("%d\n",*p_num);
    return 0;
}