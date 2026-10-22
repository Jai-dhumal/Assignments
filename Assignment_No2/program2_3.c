#include<stdio.h>
#include<stdlib.h>

/*
////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Displays Hello if iNo<10.
// Input         : Integer (iNo)
// Output        : Prints Hello According to the Input Condiition
// Author        : Dhumal Jaydeep Machhindra
// Date          : 18/10/2026
//
////////////////////////////////////////////////
*/

void Display(int iNo)
{
    if(iNo<10)
    {
        printf("Hello\n");

    }
    else
    {
        printf("Invalid Input\n");
    }
}
int main()
{   
    int iValue=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    Display(iValue);
    return EXIT_SUCCESS;
}