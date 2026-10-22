#include<stdio.h>
#include<stdlib.h>
/*
////////////////////////////////////////////////
//
//Function Name : Division of Two Numbers
//Description   : It is Used to perform Division.
//Input         : Integer,Integer
//Output        : Integer
//Author        : Dhumal Jaydeep Machhindra
//Date          : 18/10/2026
//
////////////////////////////////////////////////
*/
int Divide(int iNo1,int iNo2)
{
    int iAns=0;
    iAns=iNo1/iNo2;
    return iAns;
}

/*
////////////////////////////////////////////////
//
//Function Name : Main Function
//Description   : Initializes values, calls Divide(), and displays the result.
//Input         : Integer,Integer
//Output        : Integer
//Author        : Dhumal Jaydeep Machhindra
//Date          : 18/10/2026
//
////////////////////////////////////////////////
*/
int main()
{   
    int iValue1=15,iValue2=5;
    int iRet=0;

    iRet=Divide(iValue1,iValue2);

    printf("Division is:%d\n",iRet);

    return EXIT_SUCCESS;
}