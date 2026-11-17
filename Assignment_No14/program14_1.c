////////////////////////////////////////////////////////////////////////////
//Problem Statement:
//Write A program That Accept a Number as Input From User And Display Its 
// The Multiplicatio of its Factors
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : MulFact
//  Description     : Calculates the multiplication of the factors of a number
//  Input           : An integer number
//  Output          : Returns the multiplication of the factors
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
int MulFact(int iNo)
{
    int iCnt=0;
    int iProduct=1;
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
          iProduct=iProduct*iCnt;
        }
    }

    return iProduct;
}
int main()
{   int iValue=0,iRet=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    iRet=MulFact(iValue);
    printf("The Multiplication of the factors of the given number is:%d\n",iRet);

    return EXIT_SUCCESS;
}