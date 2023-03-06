/* 3. Create an application with a functions named 
newInt, newDouble, newFloat, and newCharArray. 
Each function is to dynamically allocate memory to store a value of the indicated data type 
(need to send a size parameter to the character array function). 
The function will return a memory address to the main program where it initializes a pointer. 
Store an appropriate value in each memory address and then display the value stored.
*/

#include<stdio.h>
#include<stdlib.h>

void* newInt(int size);
void* newDouble(int size);
void* newFloat(int size);
void* newCharArray(int size);

int main(int argc, char const *argv[])
{
    int* intPtr = newInt(1);
    *intPtr = 5;
    printf("Value stored in intPtr: %d\n", *intPtr);
    free(intPtr);

    double* doublePtr = newDouble(1);
    *doublePtr = 5.5;
    printf("Value stored in doublePtr: %f\n", *doublePtr);
    free(doublePtr);

    float* floatPtr = newFloat(1);
    *floatPtr = 5.5;
    printf("Value stored in floatPtr: %f\n", *floatPtr);
    free(floatPtr);

    char* charPtr = newCharArray(10);
    charPtr = "Hello World";
    printf("Value stored in charPtr: %s\n", charPtr);
    free(charPtr);
    return 0;
}

void* newInt(int size){
    int* ptr = (int*)malloc(size * sizeof(int));
    return ptr;
}

void* newDouble(int size){
    double* ptr = (double*)malloc(size * sizeof(double));
    return ptr;
}

void* newFloat(int size){
    float* ptr = (float*)malloc(size * sizeof(float));
    return ptr;
}

void* newCharArray(int size){
    char* ptr = (char*)malloc(size * sizeof(char));
    return ptr;
}