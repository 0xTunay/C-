#include <stdio.h>
int main()
{


    int c = 5 | 2;
    int v = 6 & 2;
    int n = 5 ^ 2;

    int f = 12;
    int d = ~f;

    printf("c = %d,v = %d,n = %d,f = %d,d = %d\n",c,v,n,f,d );
    return 0;
}