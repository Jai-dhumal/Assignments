#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

/*
////////////////////////////////////////////////
//
// Function Name : CheckEven
// Description   : Checks whether the given number is even.
// Input         : Integer (iNo)
// Output        : Returns TRUE if the number is even;
//                 otherwise, returns FALSE.
// Author        : Dhumal Jaydeep Machhindra
// Date          : 18/10/2026
//
////////////////////////////////////////////////
*/

BOOL CheckEven(int iNo)
{
    if(iNo%2==0)
    {
        return TRUE;
    }
    else
    {
      return FALSE;
    }
}
int main()
{   int iValue=0;
    BOOL bRet=FALSE;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    bRet=CheckEven(iValue);
    if(bRet==TRUE)
    {
        printf("The Number is Even\n");
    }
    else
    {
      printf("The Number is  Odd\n");
    }

    return EXIT_SUCCESS;
}