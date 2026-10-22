#include<stdio.h>
#include<stdlib.h>

/*
////////////////////////////////////////////////
//
//Function Name : Display
//Description   : Prints Specified Number of Stars.
//Input         : Integer
//Output        : prints iNo Number of Stars
//Author        : Dhumal Jaydeep Machhindra
//Date          : 18/10/2026
//
////////////////////////////////////////////////
*/

void Display(int iNo)
{   if(iNo<0)
    {
       iNo=-iNo; 
    }

    int iCnt=0;

    while(iCnt<iNo)
    {
        printf(" * ");
        iCnt++;
    }

  
}
int main()
{
    int iValue=0;
    printf("Enter the Number:\n");
    scanf("%d",&iValue);
    Display(iValue);
    return EXIT_SUCCESS;

}