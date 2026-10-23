#include<stdio.h>
#include<stdlib.h>

/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : FindGreater
//  Description     : The function checks Which Number is Greater
//  Input           : Integer,Integer
//  Output          : Prints which number is Greater 
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 22/10/2026
//
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/

void FindGreater(int iFirst,int iSecond)
{   if(iFirst==iSecond)
    {
        printf("The Number Are Equals\n");
        return;
    }
    if(iFirst>iSecond)
    {
        printf("The First Number is Greater\n");

    }
    else
    {
        printf("The Second Number is Greater\n");

    }
}
int main()
{   int iValue1=0,iValue2=0;
    printf("Enter First Number:\n");
    scanf("%d",&iValue1);
    
    printf("Enter Second Number:\n");
    scanf("%d",&iValue2);

    FindGreater(iValue1,iValue2);
   
    return EXIT_SUCCESS;
}