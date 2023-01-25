/* Create an application that prompts a user to enter two numbers. 

Create 4 functions 
• addThem • subtractThem • multiplyThem • divideThem 

that accepts both entered values, 
does the appropriate mathematic operation, 
and sends the result back to the program. 

After the numbers are entered (and verified), 
call each function in your program 
and display the result of the function calls using the following format: 
x plus y is result, x minus y is result2, etc...

*/

#include<stdio.h>


int addThem(int num1, int num2){
    return num1 + num2;
}

int substractThem(int num1, int num2){
    return num1 - num2;
}

int multiplyThem(int num1, int num2){
    return num1 * num2;
}

double divideThem(int num1, int num2){
    return ((float) num1) / num2;
}

void getNumber(int* num){
    printf("Please enter a number: ");
    scanf(" %d", num);
}

int main(){
    int num1, num2; 
    getNumber(&num1);
    getNumber(&num2);
    int sum = addThem(num1, num2);
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    int substraction = substractThem(num1, num2);
    printf("The substraction of %d minus %d is: %d\n", num1, num2, substraction);
    int multiplication = multiplyThem(num1, num2);
    printf("The multiplication of %d and %d is: %d\n", num1, num2, multiplication);
    float division = divideThem(num1, num2);
    printf("The division of %d by %d is %3.2f", num1, num2, division);
}