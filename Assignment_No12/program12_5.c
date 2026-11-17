#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Count
//  Description     : Counts digits less than six in a number
//  Input           : An integer number
//  Output          : Returns the count of digits less than six
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
long Count(int iNo)
{ 
    int iLastDigit=0;
    int iCount=0;
    while(iNo != 0)
    {
        iLastDigit=iNo%10;
        if(iLastDigit < 6)
        {
            iCount++;
        }

        iNo=iNo/10;
    }
    return iCount;

}
int main()
{   long iValue=0, iRet=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    iRet=Count(iValue);
    printf("The frequecy of Number Less Than Six  in Number is:%d",iRet);


    return EXIT_SUCCESS;
}