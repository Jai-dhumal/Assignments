#include<stdio.h>
#include<stdlib.h>


/*
////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Displays the first Number Second Number of times.
// Input         : Integer (iNo),Integer(iFrequency)
// Output        : Prints the first Number Second Number of times
// Author        : Dhumal Jaydeep Machhindra
// Date          : 18/10/2026
//
////////////////////////////////////////////////
*/

int Display(int iNo1,int iFrequency)
{   int iCnt=0;
    for(iCnt=1;iCnt<iFrequency;iCnt++)
    {
        printf("%d\n",iNo1);

    }

}
int main()
{   int iValue1=0,iCount=0;
    printf("Enter First Number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number:\n");
    scanf("%d",&iCount);

    Display(iValue1,iCount);
    return EXIT_SUCCESS;
}