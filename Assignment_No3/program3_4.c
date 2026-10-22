#include<stdio.h>
#include<stdlib.h>

/*
///////////////////////////////////////////////////////////////////
//                                                               
// Function Name : DisplayConvert                                      
// Description   : Convert The Charter from Upper to Lower And Vicevera .      
// Input         : charater(chaar)                                 
// Output        : Display Converted Character                  
// Author        : Dhumal Jaydeep Machhindra                     
// Date          : 18/10/2026                                    
//                                                               
//////////////////////////////////////////////////////////////////
*/

void DisplayCovert(char cValue)
{
    if((cValue>='A') && (cValue<='Z'))
    {
        printf("%c\n",cValue+32);
    }
    else if((cValue>='a') && (cValue<='z'))
    {
        printf("%c\n",cValue-32);
    }
}

int main()
{
    char cValue='\0';
    printf("Enter Charater:\n");
    scanf("%c",&cValue);
    DisplayCovert(cValue);

}