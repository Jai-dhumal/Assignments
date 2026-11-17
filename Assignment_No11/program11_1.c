#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : RangeDisplay
//  Description     : Displays all integers in the specified range
//  Input           : Two integer values representing the start and end
//  Output          : Prints each integer in the range
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
void RangeDisplay(int iStart,int iEnd)
{
    int iCnt=0;
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{   int iValue1=0;
    int iValue2=0;
    printf("Enter First Number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number:\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);
    return EXIT_SUCCESS;
}