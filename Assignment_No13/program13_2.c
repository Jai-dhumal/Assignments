//////////////////////////////////////////////////////////////////////////////////////
//problem statemet:
//write a program that Accept Number from User And return the count of Odd Digits
//////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CountOdd
//  Description     : Counts the odd digits in an integer
//  Input           : An integer number
//  Output          : Returns the count of odd digits
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
int CountOdd(int iNo)
{
    int iLastDigit=0;
    int iCount=0;
    while( iNo != 0)
    {
        iLastDigit=iNo % 10;
        
        if((iLastDigit %2 ) != 0)
        {
            iCount++;
        }

        iNo=iNo/10;
    }

    return iCount;
}
int main()
{   int iValue=0,iRet=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet=CountOdd(iValue);
    printf("The Count of the Odd Number in The Number is:%d\n",iRet);


    return EXIT_SUCCESS;
}