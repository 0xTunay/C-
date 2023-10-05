#include <stdio.h>

int fibonachy(int n)
{
    if(n == 0 || n == 1) return n;

       return fibonachy(n-1)+ fibonachy(n-2);

}
int main (void)
{
    int fib4 = fibonachy(4);

    printf("%d",fib4);
}
