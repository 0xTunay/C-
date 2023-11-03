#include <stdio.h>

int a,b;
char operator;

printf("number 1?");
scanf("%d\n", &a);
printf("number 2?");
scanf("%d\n",&b);
printf(" what doint?");
scanf("%s",&operator);

int result
switch(operator)
{
    case: '-';
        result = a + b;
        break;
    case: '-';
        result = a - b;
        break;
    case: '*';
        result = a * b;
        break;
    case: '/';
        result = a / b;
        break;        
    default:
        printf("введите верный оператор");
        return 1;
}

printf("result = %d", result);
return 0;