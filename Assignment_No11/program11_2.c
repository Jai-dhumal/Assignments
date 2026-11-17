#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : RangeDisplayEven
//  Description     : Displays all even numbers in the specified range
//  Input           : Two integers representing the start and end points
//  Output          : Prints each even number in the range
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
void RangeDisplayEven(int iStart,int iEnd)
{   

    if(iStart > iEnd)
    {
        printf("Ivalid Input\n");
    }
    int iCnt=0;
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{   int iValue1=0,iValue2=0;

    printf("Enter Start point:\n");
    scanf("%d",&iValue1);

    printf("Enter End  point:\n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return EXIT_SUCCESS;
}