/*
    Data types
    
    Primitive data types
    void
    int => Dim x as Integer => int x; memory is 2 bytes 2^16 -32768 to 3276
    long => 4 bytes -2.18 to 2.18
    char => 1 byte single letters => 0-9, a-z, A-Z + 60 more when using single quotes around the value
    double => real number 8 bytes (has decimal)
    float => real numbers but only 4 bytes

    int => 1st bit reserved for +/- 2^15 -32k to 32k
    unsigned int => not reserving bit 2^16 0 to 65k


    struct => midpoint between a class and an array
    unions
    enum => predefined collection of constant values
    


    Collection data types
    - Arrays

    Placeholder data types
    %c character
    %d int, short
    %ld long integer
    %f float, double
    %u unsigned int, unsigned short
    %lu unsigned long integer
    %s character array (string)

    puts("some text"); // shorthand put string no variables


*/

#include<stdio.h>

#define TWELVE 12

int main()
{
    int a = 12;
    a = 15;
    printf("This is a string. A stored value is %d\n", a);

    double b = 55.5;
    printf("The first value is %d and the second is %f\n", a, b);
    return 0;
}
