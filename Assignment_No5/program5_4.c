#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Divisiblity
//  Description     : The function checks Wheter Number is  Divisibel by 3 and 5
//  Input           : Integer
//  Output          : Prints Divisiblity
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 22/10/2026
//
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/
void CheckDivisibility(int iValue)
{ 
    if(iValue<0)
    {
       iValue=-iValue;
    }
    if((iValue%5==0) && (iValue%3==0))
    {
        printf("The Number is Divisible \n");
    }
    else
    {
        printf("The Number is  not Divisible\n");
    }

}
int main()
{   
    int iValue=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    CheckDivisibility(iValue);

   
 
    return EXIT_SUCCESS;
}