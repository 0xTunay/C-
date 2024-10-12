#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int* data;
    int size;
} Array;

void printArray(Array* arr)
{
    for (int i = 0; i < arr->size; i++) {
        printf("%d ", arr->data[i]);
    }
    printf("\n");
    
}

int main(void)
{
    Array arr;
    int size = 5;

    arr.data = (int*)malloc(size * sizeof(int));
    arr.size = size;

    if (arr.data == NULL)
    {
        printf("error memory\n");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        arr.data[i] = i + 1;
    }

    printArray(&arr);

    free(arr.data);

    return 0;
}
