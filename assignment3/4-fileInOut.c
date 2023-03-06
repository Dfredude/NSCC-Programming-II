/*
Create a program where the user is continuously prompted for text until a -1 is entered. 
Each entered line of text is to be written to a file (except the -1). 
When the user finishes their data entry, retrieve each line of text from the file and display.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void writeToFile(char* fileName, char* text);
void readFromFile(char* fileName);

int main(int argc, char const *argv[])
{
    char* fileName = "text.txt";
    char text[100];
    puts("Enter text to be written to file. Enter -1 to stop.");
    while (1)
    {
        printf("Enter text: ");
        fgets(text, 100, stdin);
        if (strcmp(text, "-1\n") == 0)
        {
            break;
        }
        writeToFile(fileName, text);
    }
    puts("Reading from file...");
    readFromFile(fileName);
}

void writeToFile(char* fileName, char* text){
    FILE* file = fopen(fileName, "a");
    if (file == NULL)
    {
        printf("Error opening file \"%s\". Exiting program.\n", fileName);
        exit(1);
    }
    fprintf(file, "%s", text);
    fclose(file);
}

void readFromFile(char* fileName){
    FILE* file = fopen(fileName, "r");
    if (file == NULL)
    {
        printf("Error opening file \"%s\". Exiting program.\n", fileName);
        exit(1);
    }
    char text[100];
    while (fgets(text, 100, file) != NULL)
    {
        printf("%s", text);
    }
    fclose(file);
}
 