#include <stdio.h>

int main(int argc, char *argv[]) 
{
  if(argc == 1) {
    printf("You didn't give any arguments!\n");
    return 1;
  } else if(argc > 1 && argc < 4) {
    printf("Here's your arguments:\n");

    for(int i = 0; i < argc; i++) {
      printf("%s ", argv[i]);
    }
    printf("\n");
  } else {
    printf("Only 2 arguments are allowed; you gave %d.\n", argc - 1);
    return 1;
  }
  return 0;
}
