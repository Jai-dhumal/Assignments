#include<stdio.h>
#include<stdlib.h>
/*
////////////////////////////////////////////////
//
//Function Name : Display
//Description   : The Function Prints Five Times index or counter vlaue.
//Input         : No Direct Parameter
//Output        : prints 5 to 1 
//Author        : Dhumal Jaydeep Machhindra
//Date          : 18/10/2026
//
////////////////////////////////////////////////
*/

void Display()
{
    int iCnt=5;
    while(iCnt>=1)
    {
        printf("%d\n",iCnt);
        iCnt--;

    }
}
int main()
{   

    Display();

    return EXIT_SUCCESS;
}