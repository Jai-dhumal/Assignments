#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CheckZero
//  Description     : Checks whether a number contains the digit zero
//  Input           : An integer number
//  Output          : Returns TRUE if the number contains zero; otherwise FALSE
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
BOOL CheckZero(int iNo)
{  
    int iLastDigit=0;
    while (iNo != 0)
    {
       iLastDigit=iNo%10;
       if(iLastDigit == 0)
       {
         return TRUE;
       }


       iNo=iNo/10;

    }
    
    return FALSE;
    
}
int main()
{   int iValue=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    BOOL bRet=FALSE;
    bRet=CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("The Number Contains Zero\n");
    }
    else
    {
        printf("The Number Does Not Contains Zero\n");
    }

    return EXIT_SUCCESS;
}