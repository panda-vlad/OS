#include<stdio.h>
#include<stddef.h>

char memory[20000];

struct block{
 size_t size;
 int free;
 struct block *next; 
};

struct block *freeList=(struct block*)memory;

void initialize();
void split(struct block *fitting_slot,size_t size);
void *MyMalloc(size_t noOfBytes);
void merge();
void MyFree(void* ptr);
