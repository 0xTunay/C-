#include <stdio.h>
#define PRINT_ERROR

int main(void)
{
    int lol = 0, run = 1;
    
    while(run)
    {
        printf("enter: ");
        scanf("%d", &lol);

        if(lol == 0)
        {
#ifdef PRINT_ERROR
            puts("ERROR");
#endif
            run = 0; 
        }
    }

    return 0;                      
}
