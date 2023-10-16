#include <stdio.h>

int simple_multiplication(int number) {
  if (number % 2 == 0) {
    number *= 8;
  } else {
    number *= 9;
  }
  return 0;
}
int main(void) {
  printf("hello\n"); 
}
