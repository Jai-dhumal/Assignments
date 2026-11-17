//////////////////////////////////////////////////////////////////////////////////////////
//problem statemet:
//write a program that Accept Number from User And return the Difference between the 
//summation of Even And Odd Nuber
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CountDiff
//  Description     : Returns the difference between the sums of even and odd digits
//  Input           : An integer number
//  Output          : Returns the difference between the even- and odd-digit sums
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
int CountDiff(int iNo)
{
    int iSumEven=0;
    int iSumOdd=0;

    int iLastDigit=0;
    

    while(iNo != 0)
    {
        iLastDigit=iNo % 10;
        if((iLastDigit % 2) == 0)
        {
            iSumEven=iSumEven+iLastDigit;
        }
        else
        {
            iSumOdd=iSumOdd+iLastDigit;
        }

        iNo=iNo/10;
    }


    int iDiff=iSumEven-iSumOdd;

    return iDiff;
}
int main()
{   
    int iValue=0,iRet=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    iRet=CountDiff(iValue);
    printf("The  Difference between the  summation of Even And Odd Number is:%d\n ",iRet);
    return EXIT_SUCCESS;
}