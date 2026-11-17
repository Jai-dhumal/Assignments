////////////////////////////////////////////////////////////////////////////
//Problem Statement:
//Write A program That Accept a Number as Input From User And Display Its 
//All Non-Factors
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : NonFact
//  Description     : Displays all non-factors of a number
//  Input           : An integer number
//  Output          : Prints all non-factors of the input number
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
void NonFact(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iNo % iCnt) !=0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{   int iValue=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    NonFact(iValue);

    return EXIT_SUCCESS;
}