#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : RangeDisplayRev
//  Description     : Displays numbers in reverse order within a range
//  Input           : Starting and ending integer values
//  Output          : Prints the range in reverse order
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
void RangeDisplayRev(int iStart,int iEnd)
{   if(iStart < 0 || iStart>iEnd)
    {
        printf("Invalid Input\n");
        return ;
    }
    int iCnt=0;
    for(iCnt=iEnd;iCnt>=iStart;iCnt--)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{   int iValue1=0,iValue2=0;
    printf("Enter Start Point Number:\n");
    scanf("%d",&iValue1);

    printf("Enter End Point Number:\n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return EXIT_SUCCESS;
}