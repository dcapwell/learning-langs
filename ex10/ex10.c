#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

  // go through each string in argv
  // skip over argv[0] because thats not a arg, thats the path to the cmd
  for(i = 1; i < argc; i++) 
  {
    printf("arg %d: %s\n", i, argv[i]);
  }

  // let's make our own array of strings
  char *states[] = {
    "California", "Oregon",
    "Washington", "Texas"
  };
  int num_states = 4;

  for(i = 0; i < num_states; i++) {
    printf("state %d: %s\n", i, states[i]);
  }

  // only allowed in c99.  Make has been updated for this.
  for(int j = 0; j < 10; j++) {
    printf("index %d\n", j);
  }

  return 0;
}
