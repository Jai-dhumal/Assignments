#include<stdio.h>
#include<stdlib.h>
/*
////////////////////////////////////////////////
//
// Function Name : PrintEven
// Description   : Prints Even Number Upto the iNo.
// Input         : Integer (iNo)
// Output        : Returns TRUE if the number is even;
//                 otherwise, returns FALSE.
// Author        : Dhumal Jaydeep Machhindra
// Date          : 18/10/2026
//
////////////////////////////////////////////////
*/
void PrintEven(int iNo)
{    if(iNo<0)
    {   
        printf("Invalid Input\n");
        return;
    }
    int iCnt=0;
    
    for(iCnt=1;iCnt<=iNo*2;iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("%d\n",iCnt);
            
        }
    }
}
int main()
{   int iValue=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return EXIT_SUCCESS;
}