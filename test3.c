#include<stdio.h>

int main()
{
    puts("Program that requests a string");
    char pseudo_string[256];
    puts("Please enter your word: ");
    scanf("%s", pseudo_string);
    // scanf will stop after the whitespace character
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);   
    printf("Your words were: %s\n", pseudo_string);

    puts("Please try again to enter words...");
    gets(pseudo_string); // Unsafe but works 
    printf("Your new text is %s\n", pseudo_string);   

    puts("Please try again to enter words safely...");
    fgets(pseudo_string, sizeof(pseudo_string), stdin);
    printf("Your fgets() text is: %s\n", pseudo_string);
    return 0;
}
