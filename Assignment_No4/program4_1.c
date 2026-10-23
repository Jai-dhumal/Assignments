#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Namme  : CheckNumber
//  Description     : The function checks Positive and negative number
//  Input           : Integer
//  Output          : Prints wheter number is Postive or Negative
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 22/10/2026
//
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/
void CheckNumber(int iValue)
{
    if((iValue == 0))
    {
        printf("Zero\n");
        return ;
    }
    if((iValue<0))
    {
        printf("The Entered Number is Negative\n");

    }
    else if((iValue > 0))
    {
        printf("Enter Numbered is Positive\n");
    }
}
int main()
{   
    int iValue=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    CheckNumber(iValue);
    return EXIT_SUCCESS;
}