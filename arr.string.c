#include <stdio.h>
int main(void )
{
    char *array[] = {"Tom", "Bob", "Sam"};
    for (char i = 0; i < 3; ++i) {
        printf("%s\n",array[i]);
    }
    return 0;
}