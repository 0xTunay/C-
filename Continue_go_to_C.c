#include <stdio.h>
int main (void)
{
    char name[10];
    printf("name>");
    scanf("%10s[^/n]",name);

    printf("name %s \n",name);
    return 0;
}
