#include <stdio.h>

int main() 
{
  // boolean test.
  // in C, 0 == false and everything else is true
  // no boolean type, so int is used.
  if(10) {
    printf("10 is true!\n");
  }

  if(! 0) {
    printf("0 is false!\n");
  }

  printf("10 < 12: %d.\n", 10 < 12);
  printf("10 < 9: %d.\n", 10 < 9);
  printf("10 == 10: %d.\n", 10 == 10);

  // what about char?  char is just a byte
  // and boolean only needs 1 byte!
  if('a') {
    printf("'a' is true!\n");
  }

  if(! '\0') {
    printf("'\\0' is false!\n");
  }

  return 0;
}
