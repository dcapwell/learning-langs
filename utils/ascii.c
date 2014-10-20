#include <stdio.h>

/* Takes the given ascii input and returns each char as a int number */
int main(int argc, char *argv[])
{
  for(int i = 1; i < argc; i++) {
    for(int j = 0; argv[i][j] != '\0'; j++) {
      printf("'%c' = %d.\n", argv[i][j], argv[i][j]); 
    }
  }

  return 0;
}
