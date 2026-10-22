#include<stdio.h>
#include<stdlib.h>

/*
////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Displays the specified number of stars.
// Input         : Integer (iNo)
// Output        : Prints stars according to the
//                 absolute value of iNo.
// Author        : Dhumal Jaydeep Machhindra
// Date          : 18/10/2026
//
////////////////////////////////////////////////
*/

void Display(int iNo)
{   
    //Updater
    if(iNo<0)
    {
        iNo=-iNo;
    }

    
    while(iNo>0)
    {
        printf(" * ");
        iNo--;
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