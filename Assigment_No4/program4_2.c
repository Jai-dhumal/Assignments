#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iValue)
{
    if(iValue<0)
    {
        iValue=-iValue;
    }

    if((iValue%2==0))
    {
        printf("The Entered Number is Even\n");

    }
    else
    {
        printf("The Entered Number is Odd\n");

    }
}
int main()
{   int iValue=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    CheckEvenOdd(iValue);
    return EXIT_SUCCESS;
}