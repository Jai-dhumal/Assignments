#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : EvenFactorial
//  Description     : Calculates the product of all even numbers up to the input
//  Input           : An integer number
//  Output          : Returns the even factorial product
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
typedef unsigned long long BIGINT;
BIGINT EvenFactorial(int iNo)
{  
    int iCnt=0;
    BIGINT iProduct=1;

    if(iNo < 0)
    {
        iNo=-iNo;
    }


    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt % 2 )==0)
        {
            iProduct=iProduct*iCnt;

        }
    }

    return iProduct;
}


int main()
{   int iValue=0;
    BIGINT iRet=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    iRet=EvenFactorial(iValue);
    printf("The Even Factorial Product is:%llu\n",iRet);
    return EXIT_SUCCESS;
}