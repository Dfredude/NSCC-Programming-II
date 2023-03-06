/*
Create an application to allocate enough memory to store 10 integer values. 
Using a while loop, a counter, and an incrementing pointer,  set the initial values to:
1, 3, 6, 10, 15, 21, 28, 36, 45, 55 (counter variable added to running sum)

Prompt the user for a value and the position where the number is to be inserted. 
Rather than simply overwriting the value at this position, your program will shift the current values starting at the insertion point.

Example:
Stored values are 1, 3, 6, 10, 15, 21, 28, 36, 45, 55
User is to enter 99 at position 3
Stored values become 1, 3, 99, 6, 10, 15, 21, 28, 36, 45

Display each value in the ordered memory space.
*/

#include <stdio.h>
#include <stdlib.h>

#define LEN 10

int main(int argc, char const *argv[])
{
    int* numbers = malloc(LEN * sizeof(int));
    if (numbers == NULL){
        printf("Error allocating memory");
        return 1;
    }
    int *p = numbers;
    int counter = 1;
    for (size_t i = 0; i < LEN; i++)
    {
        *p = counter;
        counter += i + 2;
        p++;
    }
    int value, position;
    printf("Enter a value: ");
    scanf("%d", &value);
    printf("Enter a position: ");
    scanf("%d", &position);
    p = numbers + position - 1;
    for (size_t i = position - 1; i < LEN; i++)
    {
        int temp = *p;
        *p = value;
        value = temp;
        p++;
    }
    p = numbers;
    for (size_t i = 0; i < LEN; i++)
    {
        printf("%d ", *p);
        p++;
    }
    puts("");
    return 0;
}



