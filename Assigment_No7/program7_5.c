#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : MultipleDisplay
//  Description     : Displays the first five multiples of iNo
//  Input           : An integer number (iNo)
//  Output          : Prints the first five multiples of iNo
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 06/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
void MultipleDisplay(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;

    }
    int iCnt=0;

    for(iCnt=1;iCnt<=5 ;iCnt++)
    {
       printf("%d\t",iNo*iCnt);
        }

    }
int main()
{   int iValue=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    MultipleDisplay(iValue);
    return EXIT_SUCCESS;
}
