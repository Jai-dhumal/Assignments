#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CountTwo
//  Description     : Counts the occurrences of digit 2 in a number
//  Input           : An integer number
//  Output          : Returns the frequency of digit 2
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
int CountTwo(int iNo)
{ 
    int iLastDigit=0;
    int iCount=0;
    while(iNo != 0)
    {
        iLastDigit=iNo%10;
        if(iLastDigit == 2)
        {
            iCount++;
        }

        iNo=iNo/10;
    }
    return iCount;

}
int main()
{   int iValue=0,iRet=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    iRet=CountTwo(iValue);
    printf("The frequecy of Two in Number is:%d",iRet);


    return EXIT_SUCCESS;
}