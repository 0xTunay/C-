#include <stdio.h>

int sum( int x,int y, char prada)
{
    if (prada =='+'){
        return x+y;
    }
    else if(prada == '-'){
        return x-y;
    }
    else{
        return 0;
    }
}
int main (void)
{
    int x = 30;
    int y = 10;
    char prada = 'g';
    int relust = sum(x,y,'+');
    int relust1 = sum(x,y,'-');
    int relust2 = sum(x,y,'g');

    printf("%d + %d = %d\n",x,y,relust);
    printf("%d - %d = %d\n",x,y,relust1);
    printf("%d\n",relust2);




}
