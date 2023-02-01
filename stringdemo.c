#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char string[10] = "Hello\n\0";
    printf("size of: %lu\n", sizeof string);
    printf("length of: %lu\n", strlen(string));

    return 0;
}
