#include<stdio.h>
#include<stdlib.h>

/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : DisplayGrade
//  Description     : Displays the grade corresponding to the marks
//  Input           : Marks as a float
//  Output          : Prints the corresponding grade or invalid marks
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 22/10/2026
//
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/
void DisplayGrade(float fMarks)
{
    if((fMarks<0))
    {
        printf("Invalid Marks...\n");
    }

    if((fMarks<=100) && (fMarks>=90))
    {
        printf("Grade A\n");
    }
    else if ((fMarks<=89) && (fMarks>=75))
    {
        printf("Grade B\n");
    }
    else if ((fMarks<=74) && (fMarks>=60))
    {
        printf("Grade C\n");
    }
    else if ((fMarks<=59) && (fMarks>=40))
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Fail\n");

    }
    
}
int main()
{   float fMarks=0.0f;
    printf("Enter The Marks OF the Student:\n");
    scanf("%f",&fMarks);
    DisplayGrade(fMarks);
    return EXIT_SUCCESS;
}