#include <stdio.h>

// this program shows what happens when you start working with arrays passed
// their length.  Since the program's memory shouldn't pass 4k, writing to
// danger[4000] should cause a SegFault
int main() 
{
  int danger[] = {};
  int offset = 4000;

  printf("Current value of danger[%ld]: %ld.\n",
      offset, danger[offset]);

  danger[offset] = 10;

  printf("Current value of danger[%ld]: %ld.\n",
      offset, danger[offset]);

  return 1;
}
