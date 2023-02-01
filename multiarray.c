#include <stdio.h>

#define ARRAY_SIZE

int main(int argc, char const *argv[])
{
    int numbers[5];

    printf("Size of int is: %lu\n", sizeof(int));

    numbers[0] = 0;
    numbers[1] = 0;
    char* myString = "Hello\0";
    int array[ARRAY_SIZE] = { 1, 5, 7, 9, 11};
    int array2[] = { 1, 2, 4, 5, 7, 8, 9, 11, 13};
    // int array3[] = 
    return 0;
}
