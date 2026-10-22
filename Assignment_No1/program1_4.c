#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

/*
////////////////////////////////////////////////
//
//Function Name : check
//Description   : The Function Check Whether the number is divisible by 5 or not .
//Input         : Integer
//Output        : prints Divisible or Not 
//Author        : Dhumal Jaydeep Machhindra
//Date          : 18/10/2026
//
////////////////////////////////////////////////
*/

BOOL check(int iNo1)
{
    if((iNo1%5==0))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{   
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter the Number:");
    scanf("%d",&iValue);
    bRet=check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5 ");
    }
    else
    {
        printf("Not Divisible by 5");

    }



    return EXIT_SUCCESS;
}