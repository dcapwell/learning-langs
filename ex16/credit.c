#include <stdio.h>
#include <alloca.h>
#include <stdlib.h>

struct Person {
  char *name;
  int age;
};

// requires a copy of Person
void Person_print(struct Person who)
{
  printf("Name: %s\n", who.name);
  printf("\tAge: %d\n", who.age);
}

int main(int argc, char *argv[])
{
  struct Person bob = {"Bob the Builder", 10};
  printf("His name is: %s.\n", bob.name);
  Person_print(bob);

  return 0;
}

// This was just for me to play with stack pointers.  
// In theory, this shouldn't be needed since you can
// create structs on stack.
//
// int Person_age(struct Person *p)
// {
//   return p->age;
// }
// 
// int main(int argc, char *argv[])
// {
//   struct Person *bob = alloca(sizeof(struct Person));
//   // struct Person *bob = malloc(sizeof(struct Person));
//   bob->name = "name";
//   bob->age = 20;
//   printf("Bob points to %p.\n", bob);
//   printf("Calling person from function doesn't cause issues! %d.\n", Person_age(bob));
//   // shows that the memory belongs to this stack frame, so won't be cleaned
//   // up till this function exits.
//   printf("Bob points to %p.\n", bob);
// 
//   return 0;
// }
