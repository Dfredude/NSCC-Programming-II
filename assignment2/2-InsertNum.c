/* 
2. Create an application where you declare and initialize an array of 10 numbers (set in the program, not entered as input). 
Prompt the user for a value and the array position where the number is to be inserted. 
Rather than simply overwriting the value at this position, your program will shift the current values starting at the insertion point.
*/

#include<stdio.h>

void insertNum(int* nums, int num, int index);

int main(int argc, char const *argv[])
{
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0};
    int num, index;
    printf("Please enter a value to be inserted into the array: ");
    scanf("%d", num);
    printf("Please enter the position to insert the value at in the array: ");
    scanf(" %d", index);
    insertNum(nums, num, index);
    return 0;
}

void insertNum(int* nums, int num, int index){
    
}
