#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Display
//  Description     : Displays stars and hashes based on the input number
//  Input           : An integer number
//  Output          : Prints the specified number of stars and hashes
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");  

    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("#\t");
        printf("\n");
    }

}
int main()
{   int iValue=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    Display(iValue);


    return EXIT_SUCCESS;
}