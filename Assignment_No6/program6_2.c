#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CheckAdmissionEligiblity
//  Description     : Checks admission eligibility based on marks and age
//  Input           : Marks (float) and age (integer)
//  Output          : Prints eligibility status or an invalid-input message
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 22/10/2026
//
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/
void CheckAdmissionEligiblity(float fMarks,int iAge)
{
    if((fMarks<0 || fMarks>100) || (iAge<0 || iAge>100))
    {
        printf("Invalid Input..\n");
        return ;
    }

    if((fMarks>=60) && (iAge>=17))
    {
        printf("You are Eligible for the Admission\n");
    }
    else
    {
        printf("You Are Not Eligible\n");
    }
}
int main()
{   int iAge=0;
    float fMarks=0.0f;
    printf("Enter the marks:\n");
    scanf("%f",&fMarks);

    printf("Enter the Age:\n");
    scanf("%d",&iAge);
    CheckAdmissionEligiblity(fMarks,iAge);
    return EXIT_SUCCESS;

}