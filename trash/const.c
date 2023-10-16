#include <stdio.h>
int main(void)
{
    const long num = 123;
    const long *numa = &num;

    char *const hd = "hie";

    printf("%ld\n",*numa);
    printf("%s\n",hd);

    return 0;
}