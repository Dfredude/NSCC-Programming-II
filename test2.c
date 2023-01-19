#include<stdio.h>

int main()
{
    // Float
    puts("Program that requests a number");
    float rate = 0.0;
    puts("Please enter a rate: ");
    scanf("%f", &rate);
    int ch;
    while ( ( (ch = getchar()) != '\n' && ch != EOF)){
    printf("'%1c'", ch);
    }
    printf("'%c'", ch);
    printf("The new rate is: %f\n\n", rate);
    puts("Please enter a second rate");
    scanf("%f", &rate);
    while ( ( (ch = getchar()) != '\n' && ch != EOF));
    printf("The new rate is: %f\n\n", rate);
    
    // char
    char c;
    puts("Please enter a letter(a-z): ");
    scanf("%c", &c);
    while ( ( (ch = getchar()) != '\n' && ch != EOF));
    printf("The new letter is: %c\n\n", c);
   
    // int
    int num;
    puts("Please enter a whole number: ");
    scanf("%d", &num);
    while ( ( (ch = getchar()) != '\n' && ch != EOF));
    printf("The new number is: %d\n\n", num);


    return 0;
}
