#include <stdio.h>

int main() {
  int num = 10;
  int *ptr = &num; // ptr holds the address of num

  printf("The value of num is: %d\n", num);
  printf("The address of num is: %p\n", &num);
  printf("The value of ptr is: %p\n", ptr);
  printf("The value stored at the address pointed to by ptr is: %d\n", *ptr);

  return 0;
}

