#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Number
//  Description     : Classifies a number as small, medium, or greater
//  Input           : An integer number
//  Output          : Prints the range of the number
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
void Number(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo <= 50)
    {
      printf("The Enter Number is Small\n");
    }
    else if((iNo>50) && (iNo<=100) )
    {
        printf("The Enter is the Medium Range\n");
    }
    else
    {
        printf("The Number is Greater\n");

    }
}
int main()
{   int iValue=0;
    printf("Enter the Number:\n");
    scanf("%d",&iValue);
    Number(iValue);
    return EXIT_SUCCESS;

}