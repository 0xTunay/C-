#include <stdio.h>

int main()
{
    int m[3][3];

    int i,k;
    for(k = 0;k<3;k++)
    {
        for(i = 0;i<3;i++)
        {
            m[k][i] = 7;
            printf("%d",m[k][i]);
        }
        printf("\t\n");
    }
    return 0;
}
// asiodohsadosajdlas