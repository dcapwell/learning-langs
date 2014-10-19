#include <stdio.h>

/* [WARNING] This program is wrong on purpose to test valgrind */

int main()
{
  int age = 10;
  // int height;
  int height = 72; // valgrind complains about printf using this uninitialised variable

  // printf("I am %d years old.\n");
  printf("I am %d years old.\n", age); // compiler warns that not all arguments are given
  printf("I am %d inches tall.\n", height);

  return 0;
}
