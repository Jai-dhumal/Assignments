#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CountTwo
//  Description     : Counts the occurrences of digit 4 in a number
//  Input           : An integer number
//  Output          : Returns the frequency of digit 4
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
long CountTwo(int iNo)
{ 
    int iLastDigit=0;
    int iCount=0;
    while(iNo != 0)
    {
        iLastDigit=iNo%10;
        if(iLastDigit == 4)
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
    iRet=CountTwo(iValue);
    printf("The frequecy of Four in Number is:%d",iRet);


    return EXIT_SUCCESS;
}