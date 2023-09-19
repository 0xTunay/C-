#include <stdio.h>
int main(void)
{
    const long a = 10;
    const long *pa = &a;

    printf("adderes %p\t va;ue =%d", a, *pa);
    return 0;

}