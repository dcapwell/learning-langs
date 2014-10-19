#include <stdio.h>

int main() 
{
  char name[] = "Zed";
  int areas[] = {10, 12, 13, 14, 20, name[2]};

  printf("5th element: %ld.\n", areas[5]);

  return 0;
}
