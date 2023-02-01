/* 
Bitwise operations for &, |, ^, complement

& BITWISE AND

| BITWISE OR

^ BITWISE XOR

~ BITWISE NOT

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 12; // 0000 1100
    int b = 25; // 0001 1001

    printf(" a & b: %d\n", a & b); 
    printf(" a | b: %d\n", a | b);
    printf(" a ^ b: %d\n", a ^ b); // 
    printf(" a ~ b: %d\n", ~a); // -a(a+1) = -13 = 0011 
    return 0;
}
