#include <stdio.h>

#define US 0
#define ENGLAND 1
#define FRANCE 2

#define ACTIVITY_COUNTRY US

#if ACTIVITY_COUNTRY == US
    char curr[] = "dollar";
#elif ACTIVITY_COUNTRY == ENGLAND
    char curr[] = "pound";
#elif ACTIVITY_COUNTRY == FRANCE
    char curr[] = "franc";
#endif
int main(void)
{
    printf("curr = %s\n", curr);
    return 0;
}