#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : NumberLine
//  Description     : Displays numbers from -iNo to iNo
//  Input           : An integer number (iNo)
//  Output          : Prints numbers from -iNo to iNo
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 06/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
void NumberLine(int iNo)
{
    int iCnt=0;
    for(iCnt=-iNo;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);

    }
}
int main()
{   int iValue=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    NumberLine(iValue);
    return EXIT_SUCCESS;
}