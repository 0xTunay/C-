#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size = sizeof(long);
    int n = 3;
    int *ptr = malloc(n * sizeof(long));


    if(ptr){

        for(int i = 0;i<n;i++)
        {
            ptr[i] = i;
            printf("%ld",ptr[i]);
        }
    }
        size = 4 * sizeof(long);
        int *n_ptr = realloc(ptr, size);

        if(n_ptr)
        {
            printf("%p\t size: %d\n",(void*) n_ptr,size);
        }

        free(n_ptr);
    free(ptr);
    return 0;
}
