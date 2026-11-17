////////////////////////////////////////////////////////////////////////////
//Problem Statement:
//Write A program That Accept a Number as Input From User And Return Difference
// Between Summation of All Its Factors And Non Factors
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : FactDiff
//  Description     : Returns the difference between the sum of factors
//                    and the sum of non-factors of a number
//  Input           : An integer number
//  Output          : The difference between the two sums
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
int FactDiff(int iNo)
{
    int iCnt=0,iSumFact=0,iSumNonFact=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact=iSumFact+iCnt;
        }
        else
        {
            iSumNonFact=iSumNonFact+iCnt;
        }
    }
    int FactDiff=iSumFact-iSumNonFact;
    return FactDiff;
}
int main()
{   int iValue=0,iRet=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    iRet=FactDiff(iValue);
    printf("Difference Between Summation of All Its Factors And Non Factors:%d\n",iRet);

    return EXIT_SUCCESS;
}