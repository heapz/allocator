#include "allocator.h"

void *alloc(unsigned int size) {
    return (void *) HEAP_START;
}

void free(void *ptr) {

}