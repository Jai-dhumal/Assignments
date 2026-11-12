#include<stdio.h>
#include<stdlib.h>
/*
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : KMtoM
//  Description     : Converts kilometers to meters
//  Input           : Distance in kilometers
//  Output          : Distance in meters
//  Author          : Dhumal Jaydeep Machhindra
//  Date            : 12/11/2026
//
/////////////////////////////////////////////////////////////////////////////
*/
int KMtoM(int iKm)
{   if(iKm < 0)
    {
        iKm=-iKm;
    }
    int iConverted=0;
    iConverted=iKm*1000;
    return iConverted;

}
int main()
{   int iValue=0, iRet=0;
    printf("Enter The KiloMeter To convert it into Meter:\n");
    scanf("%d",&iValue);
    iRet=KMtoM(iValue);

    printf("The km to meter is:%d\n",iRet);



    return EXIT_SUCCESS;
}