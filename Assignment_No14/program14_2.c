////////////////////////////////////////////////////////////////////////////
//Problem Statement:
//Write A program That Accept a Number as Input From User And Display Its 
//  its Factors in Reverse Order
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : FactRev
//  Description     : Displays the factors of a number in reverse order
//  Input           : An integer number
//  Output           : Prints the factors in reverse order
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
void FactRev(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo/2;iCnt>=1;iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t" ,iCnt);
        }
    }
}
int main()
{   int iValue=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    FactRev(iValue);
    return EXIT_SUCCESS;
}