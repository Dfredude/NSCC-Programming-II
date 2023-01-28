/* Create an application that prompts the user for a sequence of 10 numbers. 
Create a function that will sort the array from largest-to-smallest value (do not use any built-in sort). 
Display each value in the ordered array.
*/

#include<stdio.h>

void printIntro();
int getInputCount(char* arr);
void bubbleSort(int* arr, int len);
void printArr(int* arr, int size);
void getValues(char* arr, int nums[10]);

int main(int argc, char const *argv[])
{
    char* input_string;
    printIntro();
    scanf("%[^\n]", input_string);
    int len = getInputCount(input_string);
    if (len != 10) {
        puts("Error: wrong input, program needs 10 numbers");
        return -1;
    }
    int values[10] = { 0 };
    getValues(input_string, values);
    bubbleSort(values, 10);
    printf("Your sorted array is ready:\n");
    printArr(values, 10);
    return 0;
}

void printIntro(){
    puts("Welcome to the sorter program. We'll sort them out for you");
    printf("Enter 10 numbers separated by a comma: ");
}

int getInputCount(char* arr){
    int i = 0, count = 0;
    char c = arr[0];
    while(c != 0){
        if (c == ',') count++;
        c = arr[++i];
    }
    return ++count;
}

void bubbleSort(int* arr, int len){
    int *p, *p2;
    int temp;
    for (int i = 1; i < len; i++)
    {
        p = arr, p2 = arr + 1;
        for (int j = 1; j < len; j++)
        {
            if (*p > *p2){
                temp = *p;
                *p = *p2;
                *p2 = temp;
            }
            p++;
            p2 = p + 1;
        }   
    }
}

void printArr(int* arr, int size){
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void getValues(char* arr, int nums[10]){
    char c;
    int temp_num = 0, i = 0, j = 0;
    while((c= *(arr+i)) != '\0'){
        if (c > '9' || c < '0') {
            nums[j++] = temp_num;
            temp_num = 0;
        } else {
            temp_num *= 10;
            temp_num += c-'0';
        }
        i++;
    }
    nums[9] = temp_num;
}

