#include <stdio.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main()
{
float number1, number2;
    char operation;

    printf("1: ");
    scanf("%f", &number1);

    printf(" (+, -, *, /): ");
    scanf(" %s", &operation);

    printf("2: ");
    scanf("%f", &number2);

    switch (operation)
    {
    case '+':
        printf("%.2f",add(number1,number2));
        break;
    case '-':
        printf("%2.f",subtract(number1,number2));
        break;
    case '*':
        printf("%2.f",multiply(number1,number2));    
        break;
    case '/':
        printf("%2.f",divide(number1,number2));    
    default:
        break;
    }
}
float add(float a, float b){
    return a+b;
}

float subtract(float a, float b){
    return a-b;

}
float multiply(float a, float b){
        return a*b;


}
float divide(float a, float b){
        return a/b;


}
