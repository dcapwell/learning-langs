#include <stdio.h>

int main(int argc, char *argv[]) 
{
  char *states[] = {
    "California", "Oregon", NULL,
    "Washington", "Texas"
  };
  int num_states = 5;

  for(int i = 0; i < num_states; i++) {
    printf("state %d: %s\n", i, states[i]);
  }

  // update states
  states[2] = "New York";
  for(int i = 0; i < num_states; i++) {
    printf("state %d: %s\n", i, states[i]);
  }
  
  // update args
  argv[0] = "Hello World!";
  for(int i = 0; i < argc; i++) {
    printf("arg %d: %s.\n", i, argv[i]);
  }

  return 0;
}
