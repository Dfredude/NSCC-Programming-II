/* 
2. Create an application where you declare and initialize an array of 10 numbers (set in the program, not entered as input). 
Prompt the user for a value and the array position where the number is to be inserted. 
Rather than simply overwriting the value at this position, your program will shift the current values starting at the insertion point.
*/

#include<stdio.h>

void insertNum(int* nums, int num, int index);
void printArrayOf10Ints(int* nums);


int main(int argc, char const *argv[])
{
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num, index;
    puts("Intial array of 10 numbers: ");
    printArrayOf10Ints(nums);
    printf("Please enter a value to be inserted into the array: ");
    scanf(" %d", &num);
    printf("Please enter the position to insert the value at in the array (0-9): ");
    scanf(" %d", &index);
    char ch;
    while ( ( (ch = getchar()) != '\n' && ch != EOF)); // Flushing buffer
    insertNum(nums, num, index);
    printf("Succesfully inserted \"%d\" into the array.\n", num);
    printArrayOf10Ints(nums);
    return 0;
}

void insertNum(int* nums, int num, int index){
    // Shifting values
    index++;
    int prev = nums[index-1]; // value to shift right
    int curr;
    for (int i = index; i < 10; i++){
        curr = nums[i]; // storing current value
        nums[i] = prev;
        prev = curr;
    }
    nums[--index] = num;
}

void printArrayOf10Ints(int* nums){
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", nums[i]);
    }
    puts("");    
}