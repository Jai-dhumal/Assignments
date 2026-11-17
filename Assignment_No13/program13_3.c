//////////////////////////////////////////////////////////////////////////////////////
//problem statemet:
//write a program that Accept Number from User And return the count of  Digits in Between 3 and 7
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CountRange
//  Description     : Counts digits greater than 3 and less than 7
//  Input           : An integer number
//  Output          : Returns the count of digits between 3 and 7
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
int CountRange(int iNo)
{
    int iLastDigit=0;
    int iCount=0;

    while( iNo != 0)
    {
        iLastDigit=iNo % 10;

        if((iLastDigit > 3) && (iLastDigit < 7))
        {
            iCount++;
        }

        iNo=iNo / 10;
    }

    return iCount;
}
int main()
{   int iValue=0,iRet=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet=CountRange(iValue);
    printf("The Number of the count of  Digits in Between 3 and 7 is:%d\n",iRet);
    return EXIT_SUCCESS;
}