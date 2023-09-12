#include <stdio.h>
int main(void)
{
//    int number[] = { 23,32,53,34 };
//    for(int i = 0; i< 1;i++ )
//    {
//        printf("number[%d] = %d\n",i, number[i]);
//    }
//    return 0;


//    int number[3][2] = {{1,2},{3,4},{4,6}};
//    printf("number[3][2]= %d\n",number[1][0]);
//
//
//    int numbers[2][3] = {{1,2,3},{4,5,6}};
//    for(int i = 0;i<2;i++)
//    {
//        for (int j = 0; j < 3; ++j)
//        {
//            printf("numbers[%d][%d] = %d\n",i,j, numbers[i][j] );
//        }
//    }
//    return 0;

    int arr[] = {1,2,3,4};
    for (int i = 0; i < 4; i++)
    {
        arr[i] = arr[i] * 2;
        printf("%d\n",arr[i]);
    }
    return 0;
}
