#include<stdio.h>

extern int count; // External variable. Defined in another file

void write_extern(){
    printf("count is %d", count);
}