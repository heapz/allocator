#ifndef ALLOCATOR_H
#define ALLOCATOR_H

#ifndef
#define HEAP_START 0X200000
#define MAX_LENGTH 0x1000
#endif

void *alloc(unsigned int size);

void free(void *ptr);

#endif //ALLOCATOR_H
