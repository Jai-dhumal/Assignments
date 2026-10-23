#include<stdio.h>
#include<stdlib.h>

/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : FindGreater
//  Description     : Checks which of three numbers is greater
//  Input           : Three integers
//  Output          : Prints which number is greatest
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 22/10/2026
//
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/

void FindGreater(int iFirst,int iSecond,int iThird)
{   if((iFirst == iSecond) && (iSecond == iThird))
    {
        printf("The Number Are Equals\n");
        return;
    }
    if((iFirst>iSecond) && (iFirst>iThird))
    {
        printf("The First Number is Greater\n");

    }
    else if((iSecond>iFirst) && (iSecond>iThird))
    {
        printf("The Second Number is Greater\n");

    }
    else if((iThird>iFirst) && (iThird>iSecond))
    {
        printf("The Third Number is Greater\n");
    }
    else
    {
        printf("Some Number Are Equals\n");
    }
}
int main()
{   int iValue1=0,iValue2=0,iValue3=0;
    printf("Enter First Number:\n");
    scanf("%d",&iValue1);
    
    printf("Enter Second Number:\n");
    scanf("%d",&iValue2);

    printf("Enter Third Number:\n");
    scanf("%d",&iValue3);

    FindGreater(iValue1,iValue2,iValue3);
   
    return EXIT_SUCCESS;
}