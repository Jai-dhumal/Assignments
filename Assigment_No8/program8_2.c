#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : DisplayDigitToWord
//  Description     : Displays the word corresponding to a single digit
//  Input           : An integer digit from 0 to 9
//  Output          : Prints the digit in words
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
void DisplayDigitToWord(int iNo)
{ 
    if(iNo >= 10)
    {
      printf("Enter Number is Invalid!!Please Enter Single Digit Number\n");
    }

    switch (iNo)
    {
    case 0:
        printf("Zero\n");
        break;

    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    case 4:
        printf("Four\n");
        break;
    case 5:
        printf("Five\n");
        break;
    
    case 6:
        printf("Six\n");
        break;
    case 7:
        printf("Seven\n");
        break;
    case 8:
        printf("Eight\n");
        break;
    case 9:
        printf("Nine\n");
    
    default:
    "Invalid input";
        break;
    }

}
int main()
{   int iValue=0;
    printf("Enter single Digit Number:\n");
    scanf("%d",&iValue);
    DisplayDigitToWord(iValue);
    return EXIT_SUCCESS;
}