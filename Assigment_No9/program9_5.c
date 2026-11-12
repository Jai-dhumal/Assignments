#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : FactorialDifference
//  Description     : Calculates the difference between the products of
//                    even and odd numbers up to the given number
//  Input           : An integer number
//  Output          : Returns the difference between the two products
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
int FactorialDifference(int iNo)
{   
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt=0;
    int iProductEvenSum=1;
    int iProductOddSum=1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt % 2) == 0)
        {
           iProductEvenSum=iProductEvenSum*iCnt;
        }
        else
        {
            iProductOddSum=iProductOddSum*iCnt;

        }
    }

    int iFactDiff=iProductEvenSum-iProductOddSum;
    return iFactDiff ;

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    
    iRet=FactorialDifference(iValue);
    printf("The difference of the Even And Odd Factorial Product is:%d\n",iRet);
    return EXIT_SUCCESS;
    

}