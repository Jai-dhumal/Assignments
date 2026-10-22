#include<stdio.h>
#include<stdlib.h>
/*
///////////////////////////////////////////////////////////////////
//                                                               //
// Function Name : DisplayFactors                                //
// Description   : Checks whether the given number is even.      //
// Input         : Integer (iNo)                                 //
// Output        : Returns TRUE if the number is even;           //
//                 otherwise, returns FALSE.                     //
// Author        : Dhumal Jaydeep Machhindra                     //
// Date          : 18/10/2026                                    //
//                                                               //
//////////////////////////////////////////////////////////////////
*/
void DisplayFactor(int iNo1)
{   if((iNo1<0))
    {
        iNo1=-iNo1;
    }
    int iCnt=0;
    for(iCnt=1;iCnt<iNo1/2;iCnt++)
    {
        if((iNo1%iCnt==0))
        {
            printf("%d\n",iCnt);
        }

    }
}
int main()
{   int iValue=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);


    return EXIT_SUCCESS;
}