#include <signal.h>
#include <stdio.h>

void display() {
  static int a = 0;
  a++;
  printf("%d\n", a);
}
int main(void) {
  display();
  display();
  display();
  return 0;
}
