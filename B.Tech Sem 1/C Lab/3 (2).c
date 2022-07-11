/*F303

    QUESTION 3:
    Write a program that will display the grade of the student provided his/her marks according to the following criteria:
        Marks > 80 then Grade = A
        Marks between 61 & 80 then Grade = B
        Marks between 51 & 60 then Grade = C
        Marks between 41 & 50 then Grade = D
        Marks between 35 & 40 then Grade = E
        Marks < 35 then Grade = F


*/


#include <stdio.h>

void main(void)
{
    float marks;
    printf("Enter marks of student : ");
    scanf("%f", &marks);

    if(marks > 80)
    {
        printf("Grade : A");
    }
    else if(marks > 60 && marks <= 80)
    {
        printf("Grade : B");
    }
    else if(marks > 50 && marks <= 60)
    {
        printf("Grade : C");
    }
    else if(marks > 40 && marks <= 50)
    {
        printf("Grade : D");
    }
    else if(marks >= 35 && marks <= 40)
    {
        printf("Grade : E");
    }
    else if(marks < 35 )
    {
        printf("Grade : F");
    }
}