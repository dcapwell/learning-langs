# Memory Allocation

```man
#include <stdlib.h>

void *calloc(size_t nmemb, size_t size);
void *malloc(size_t size);
void free(void *ptr);
void *realloc(void *ptr, size_t size);
```

```man
#include <alloca.h>

void *alloca(size_t size);
```

## malloc

Will allocate size bytes in memory and return a pointer to that address.  All calls to `malloc` 
should be cleaned up by called to `free` when done.

## free

Cleans up a pointer from memory.  This call is not recursive for structs, so if a struct has
a pointer, that pointer must be `free`ed first.

## realloc

Trims the size from memory.  If you `malloc(20)` and then find out that you only need 10 bytes,
you can `realloc(ptr, 10)` to free up the unused memory.

## alloca

Compiler and platform dependent memory allocator (GNU GCC has this, not all compilers do).
This allocator will allocate memory on the stack, so when the stack gets cleaned up, so
does your memory.  This simplifies memory usage by not requiring the user to call `free`.
