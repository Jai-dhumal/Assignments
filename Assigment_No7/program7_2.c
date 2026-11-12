#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Display
//  Description     : Displays numbers from 1 to the specified number
//  Input           : An integer number
//  Output          : Prints numbers from 1 to iNo
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 06/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
void Display(int iNo)
{  
     if(iNo < 0)
    {
        iNo = -iNo;

    }
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{   
    int iValue=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    Display(iValue);
    return EXIT_SUCCESS;

}