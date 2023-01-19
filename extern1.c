#include<stdio.h>
#include"extern2.c"

int count;
extern void write_external();

int main(int argc, char const *argv[])
{
    count = 5;
    write_external();
    return 0;
}
