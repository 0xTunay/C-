#include <stdio.h>
#include <stdlib.h>


int main()
{
   char oper;
   int num1,num2;
   scanf(" number %d",&num1);
   scanf("%d",&num2);
      scanf("%s",&oper);
   switch(oper)
   {
   case '+':
      return num1+num2;
      break;
   case '-':
      return num1-num2;
      break;
   default:
      main();
   }

}
