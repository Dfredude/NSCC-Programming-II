#include <stdio.h>
#include <stdlib.h>

#define LEN 10

void bubbleSort(int* arr, int len);
void printArray(int* arr, int len);

int main(int argc, char const *argv[])
{
    int* numbers = malloc(LEN * sizeof(int));
    if (numbers == NULL){
        printf("Error allocating memory");
        return 1;
    }
    for (size_t i = 0; i < LEN; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    bubbleSort(numbers, LEN);

    printArray(numbers, LEN);

    return 0;
}

void bubbleSort(int* arr, int len){
    int *p, *p2;
    int temp;
    for (int i = 1; i < len; i++)
    {
        p = arr, p2 = arr + 1;
        for (int j = 1; j < len; j++)
        {
            if (*p < *p2){
                temp = *p;
                *p = *p2;
                *p2 = temp;
            }
            p++;
            p2 = p + 1;
        }
    }
}

void printArray(int* arr, int len){
    for (size_t i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    puts("");
    }