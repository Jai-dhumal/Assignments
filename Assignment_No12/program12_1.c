#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : DisplayDigit
//  Description     : Displays each digit of a number on a separate line
//  Input           : An integer number
//  Output          : Prints the digits in reverse order
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
void DisplayDigit(int iNo)
{   
    int iLastDigit=0;
    while ((iNo>0))
    {
        iLastDigit=iNo%10;
        iNo=iNo/10;
        printf("%d\n",iLastDigit);   

    }

  
   
    
}
int main()
{   int iValue=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);


    return EXIT_SUCCESS;
}