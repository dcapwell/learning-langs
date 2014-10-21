#include <stdio.h>
#include <ctype.h>

// if these are not defined before they are used, then C compiler
// is unable to find them!  C doesn't require that the compiler
// does two phases of reading like other langs (java).
int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
  for(int i = 0; i < argc; i++) {
    print_letters(argv[i]);
  }
}

void print_letters(char arg[])
{
  for(int i = 0; arg[i] != '\0'; i++) {
    char ch = arg[i];
    if(can_print_it(ch)) {
      printf("'%c' == %d ", ch, ch);
    }
  }
  printf("\n");
}

int can_print_it(char ch)
{
  return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
  // causes SegFault
  // print_arguments(argc + 1, argv);
  print_arguments(argc, argv);
  return 0;
}
