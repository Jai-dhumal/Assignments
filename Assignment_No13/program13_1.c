//////////////////////////////////////////////////////////////////////////////////////
//problem statemet:
//write a program that Accept Number from User And return the count of Even Digits
//////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CountEven
//  Description     : Counts the even digits in a number
//  Input           : An integer number
//  Output          : Returns the count of even digits
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
int CountEven(int iNo)
{
    int iLastDigit=0;
    int iCount=0;
    while(iNo != 0)
    {
        iLastDigit=iNo % 10;

        if((iLastDigit % 2) == 0)
        {
            iCount++;
        }

        iNo=iNo/10;
    }

    return iCount;
}
int main()
{   
    int iValue=0,iRet=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    iRet=CountEven(iValue);
    printf("The Count of the Even Number in the code is:%d\n",iRet);
    return EXIT_SUCCESS;
}