#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Rev_Table
//  Description     : Displays the multiplication table in reverse order
//  Input           : An integer number
//  Output          : Prints the multiplication table from 10 to 1
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
void Rev_Table(int iNo)
{
    int iCnt=0;
    for(iCnt=10;iCnt>=1;iCnt--)
    {
        printf("%d\n",iNo*iCnt);
    }
}

int main()
{   int iValue=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    Rev_Table(iValue);

    return EXIT_SUCCESS;
}