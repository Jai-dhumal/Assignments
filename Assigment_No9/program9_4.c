#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : OddFactorial
//  Description     : Calculates the product of all positive odd numbers up to iNo
//  Input           : An integer number
//  Output          : Returns the product of all odd numbers up to iNo
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
int OddFactorial(int iNo)
{   
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt=0;
    int iProductSum=1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt % 2) != 0)
        {
           iProductSum=iProductSum*iCnt;
        }
    }
    return iProductSum;

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    
    iRet=OddFactorial(iValue);
    printf("The product  of the Odd Factorial  is:%d\n",iRet);
    return EXIT_SUCCESS;
    

}