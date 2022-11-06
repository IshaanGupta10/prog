//Define a structure data type in C language
#include <stdio.h>
struct Student
{
    int roll;
    float marks;
};
int main ()
{
    struct Student s;
    printf("Enter roll no.");
    scanf("%d",&s.roll);
    printf("Enter marks.");
    scanf("%f",&s.marks);
    printf("\nRoll: %d Marks: %f",s.roll,s.marks);
}