#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Pattern
//  Description     : Prints the pattern "$\t*\t" the specified number of times
//  Input           : An integer number
//  Output          : Prints the pattern
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 06/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
void Pattern(int iNo)
{   
    if(iNo < 0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("$\t*\t");
    }
}
int main()
{  
    int iValue=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    Pattern(iValue);


    return EXIT_SUCCESS;
}