#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CheckEvenOdd
//  Description     : The function checks Whether Number is Even or Odd number
//  Input           : Integer
//  Output          : Prints wheter number is Even or Odd
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 22/10/2026
//
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/
void CheckEvenOdd(int iValue)
{
    if(iValue<0)
    {
        iValue=-iValue;
    }

    if((iValue%2==0))
    {
        printf("The Entered Number is Even\n");

    }
    else
    {
        printf("The Entered Number is Odd\n");

    }
}
int main()
{   int iValue=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    CheckEvenOdd(iValue);
    return EXIT_SUCCESS;
}