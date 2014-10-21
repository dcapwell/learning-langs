#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

// creates a new data type
struct Person {
  char *name;
  int age;
  int height;
  int weight;
};

// create a new Person instance and return it.  Caller is expected to free when no longer needed.
struct Person *Person_create(char *name, int age, int height, int weight)
{
  // creates a block of memory that will store all person's fields
  struct Person *who = malloc(sizeof(struct Person));
  // unable to allocate memory?
  assert(who != NULL);

  // creates a new copy of name so person owns it
  who->name = strdup(name);
  who->age = age;
  who->height = height;
  who->weight = weight;

  return who;
}

// free the person reference.  This is needed over free since Person contains a pointer
void Person_destroy(struct Person *who)
{
  assert(who != NULL);

  // free(who->name);
  free(who);
}

void Person_print(struct Person *who)
{
  if(who == NULL) {
    printf("Null person given...\n");
  } else {
    printf("Name: %s\n", who->name);
    printf("\tAge: %d\n", who->age);
    printf("\tHeight: %d\n", who->height);
    printf("\tWeight: %d\n", who->weight);
  }
}

int main(int argc, char *argv[])
{
  // make two people structs
  struct Person *joe = Person_create(
      "Joe Alex", 32, 64, 140);
  struct Person *frank = Person_create(
      "Frank Blank", 20, 72, 180);

  // print the address of joe
  printf("Joe is at memory location %p:\n", joe);
  Person_print(joe);

  // print the address of frank
  printf("Frank is at memory location %p:\n", frank);
  Person_print(frank);

  // make everyone age 20 years then print again
  joe->age +=20;
  joe->height -= 2;
  joe->weight += 40;
  Person_print(joe);

  frank->age += 20;
  frank->weight += 20;
  Person_print(frank);

  // Segmentation fault
  // won't be able to access who->name or any other field of null.  Must include a null-check!
  Person_print(NULL);

  // destroy them both so we clean up
  Person_destroy(joe);
  // Person_destroy(frank);
  // break_it: break_it.c:34: Person_destroy: Assertion `who != ((void *)0)' failed.
  // process fails!
  // Person_destroy(NULL);

  return 0;
}
