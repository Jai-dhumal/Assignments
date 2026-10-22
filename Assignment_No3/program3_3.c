#include<stdio.h>
#include<stdlib.h>
/*
///////////////////////////////////////////////////////////////////
//                                                               
// Function Name : DisplayEvenFactors                                      
// Description   : Display the even factors of given number .      
// Input         : Integer (iNo)                                 
// Output        : Display Even Factors                    
// Author        : Dhumal Jaydeep Machhindra                     
// Date          : 18/10/2026                                    
//                                                               
//////////////////////////////////////////////////////////////////
*/
void DisplayEvenFactor(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;

    }

    int iCnt=0;
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if((iCnt%2==0) && ((iNo%iCnt==0)))
        {
            printf("%d\n",iCnt);
        } 

    }
}
int main()
{
    int iValue=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    DisplayEvenFactor(iValue);
    return EXIT_SUCCESS;

}