#include <stdio.h>

int is_cap(char value)
{
  return value >= 'A' && value <= 'Z';
}

char to_lowercase(char value)
{
  // ascii values
  //  # ./ascii A Z a z
  //  'A' = 65.
  //  'Z' = 90.
  //  'a' = 97.
  //  'z' = 122.
  if(is_cap(value)) {
    return value + 32;
  }
  return value;
}

int main(int argc, char *argv[])
{
  if(argc != 2) {
    printf("Command expects exactly one argument.\n");
    return 1;
  }

  for(int i = 0; argv[1][i] != '\0'; i++) {
    char letter = to_lowercase(argv[1][i]);

    switch(letter) {
      case 'a':
        printf("%d: 'A'\n", i);
        break;
      case 'e':
        printf("%d: 'E'\n", i);
        break;
      case 'i':
        printf("%d: 'I'\n", i);
        break;
      case 'o':
        printf("%d: 'O'\n", i);
        break;
      case 'u':
        printf("%d: 'U'\n", i);
        break;
      case 'y':
        if(i > 2) {
          // only sometimes y
          printf("%d: 'Y'\n", i);
        }
        break;
      default:
        printf("%d: %c is not a vowel\n", i, letter);
    }
  }

  return 0;
}
