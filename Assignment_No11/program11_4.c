#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : RangeSumEven
//  Description     : Calculates the sum of all even numbers in a range
//  Input           : Start and end integer values
//  Output          : Returns the sum of the even numbers
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
int RangeSumEven(int iStart,int iEnd)
{
    int iCnt=0;
    int iSum=0;
    if((iStart > iEnd) || iStart<0)
    {
        printf("Invalid Input\n");
        return -1;
    }
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum=iSum+iCnt;
        }
    }

    return iSum;
}
int main()
{   
    int iValue1=0,iValue2=0,iRet=0;
    printf("Enter Start Number:\n");
    scanf("%d",&iValue1);

    printf("Enter Start Number:\n");
    scanf("%d",&iValue2);

    iRet=RangeSumEven(iValue1,iValue2);
    if((iRet != -1))
    {
    printf("The Sum Of all even number till this end is:%d\n",iRet);
    }

    return EXIT_SUCCESS;
}