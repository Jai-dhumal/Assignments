#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : PrintOdd
//  Description     : Displays odd numbers from 1 to iNo
//  Input           : An integer number (iNo)
//  Output          : Prints odd numbers from 1 to iNo
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 06/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
void PrintOdd(int iNo)
{   
    if(iNo < 0)
    {
        iNo=-iNo;
    }

    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);

        }
    }
}
int main()
{   int iValue=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    PrintOdd(iValue);

    return EXIT_SUCCESS;
}