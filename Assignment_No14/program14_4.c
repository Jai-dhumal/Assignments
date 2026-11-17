////////////////////////////////////////////////////////////////////////////
//Problem Statement:
//Write A program That Accept a Number as Input From User And Display Summation
// of All its  Non-Factors
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : SumNonFact
//  Description     : Returns the sum of all non-factors of a number
//  Input           : An integer number
//  Output          : Returns the sum of all non-factors
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
int SumNonFact(int iNo)
{
    int iCnt=0;
    int iNonSum=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iNo % iCnt) !=0)
        {  
            iNonSum=iNonSum+iCnt;
           
        }
    }

    return iNonSum;
}
int main()
{   int iValue=0 ,iRet=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    iRet=SumNonFact(iValue);
    printf("%d\t",iRet);

    return EXIT_SUCCESS;
}