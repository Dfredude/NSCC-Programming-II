/* 3. 
Create a program where you define a ‘Student’ structure to represent a 
- student’s name
- id 
- grades for C, SAAD, OOP, COMM, APPD, JS. 
Declare an array of 5 ‘Students’ and initialize them within your program.
Loop through the array and display the student’s information as well as their average for the 6 courses.

*/

#include<stdio.h>

struct Student
{
    char* name;
    int id;
    int grades[6];
};

struct Student students[5] = {
    { "Fred", 1, {90, 12, 43, 65, 78, 89}},
    { "Kashniek", 2, {90, 12, 43, 65, 78, 9}},
    { "Thales", 3, {90, 92, 43, 65, 78, 89}},
    { "Wu", 4, {90, 12, 87, 65, 78, 89}},
    { "Foo", 5, {90, 12, 43, 32, 78, 89}}
};


typedef struct Student stu;

int getAverage(int *nums, int length){
    long sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += nums[i];
    }
    return sum/length;
    
}

void printStudentInfo(struct Student* student){
    printf("Student name: %s\n", (*student).name);
    printf("Student ID: %d\n", (*student).id);
    printf("Student average: %d\n\n", getAverage(student->grades, 6));
}

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++){
        printStudentInfo(&students[i]);
    }
    return 0;
}

