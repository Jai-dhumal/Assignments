#include<stdio.h>
#include<stdlib.h>
/*
////////////////////////////////////////////////
//
//Function Name : Display
//Description   : The Function Prints 5 times Marvellous.
//Input         : No Direct Parameter
//Output        : 5 Times Marvellous
//Author        : Dhumal Jaydeep Machhindra
//Date          : 18/10/2026
//
////////////////////////////////////////////////
*/
void Display()
{
    int iCnt=0;
    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("Marvellous\n");
    }
}
int main()
{   
    Display();
    return EXIT_SUCCESS;
}