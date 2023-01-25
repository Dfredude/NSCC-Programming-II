
/* Create an application that prompts a user to enter 3 number. 
Create a function that accepts all 3 values and returns the largest of the 3 numbers. 
Display the result of the function call using the following format: Largest of num1, num2, num3 is largestNum. */

#include<stdio.h>

int getMax(int num1, int num2, int num3){
    if (num1 > num2){
        if (num1 > num3) return num1;
        else return num3;
    } else if (num2 > num3) return num2;
    else return num3;
}   

int main(int argc, char const *argv[])
{
    float num1, num2, num3;
    
    printf("Please enter first number: ");
    scanf(" %f", &num1);
    printf("Please enter a second number: ");
    scanf(" %f", &num2);
    printf("Please enter a third number: ");
    scanf(" %f", &num3);
    float max_val = getMax(num1, num2, num3);
    printf("Largest number of %3.2f, %3.2f, and %3.2f is: %3.2f\n", num1, num2, num3, max_val);
    return 0;
}
