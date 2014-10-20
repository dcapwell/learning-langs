#include <stdio.h>

int main()
{
  // If an array of characters is 4 bytes long, and an integer is 4 bytes long,
  // then can you treat the whole name array like it's just an integer? How
  // might you accomplish this crazy hack?
  char word[] = "Win";
  int *wordInt = &word;

  printf("Size of int %ld, size of char %ld, size of word %ld.\n", 
      sizeof(int), sizeof(char), sizeof(word));

  printf("Result of string to int: %d.\n", *wordInt);


  // Convert name to be in the style of another and see if the code keeps working.
  // This will cause a SegFault.
  // char *name = "David";
  // name[2] = 'V';
  // printf("Name: $s.\n", name);

  return 0;
}
