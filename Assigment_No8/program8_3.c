#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Factorial
//  Description     : Calculates the factorial of a number
//  Input           : An integer number
//  Output          : Prints the factorial of the number
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
void Factorial(int iNo)
{   
    if(iNo < 0)
        {
            iNo=-iNo;
        }
    int iSum=1;
    
    for(int iCnt=iNo;iCnt>=1;iCnt--)
    {
        iSum=iSum*iCnt;
        
    }
    printf("The Factorial of Number is:%d\n",iSum);

}
int main()
{   int iValue=0;
    printf("Enter the Number:\n");
    scanf("%d",&iValue);
    Factorial(iValue);
    return EXIT_SUCCESS;
}