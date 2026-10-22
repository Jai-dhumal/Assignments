#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

/*
///////////////////////////////////////////////////////////////////
//                                                               
// Function Name : CheckVowel                                     
// Description   : Check wheter the given charater is vowel or not  .      
// Input         : charater(chaar)                                 
// Output        : Displai is Vowel or not                  
// Author        : Dhumal Jaydeep Machhindra                     
// Date          : 18/10/2026                                    
//                                                               
//////////////////////////////////////////////////////////////////
*/

BOOL CheckVowel(char cValue)
{    //updater
    if(cValue>='A'&& cValue<='Z')
    {
        cValue=cValue+32;

    }
 if(cValue == 'a' || cValue == 'e' || cValue == 'i' ||cValue == 'o' || cValue == 'u')
    {
        return TRUE;
    }
 else
    {
        return FALSE;
    }

}


int main()
{   
    char cValue='\0';
    printf("Enter Character:\n");
    scanf(" %c",&cValue);
    BOOL bRet=FALSE;
    bRet=CheckVowel(cValue);
    if(bRet==TRUE)
    {
        printf("The given charater is vowel\n");

    }
    else
    {
        printf("The given charater is  not a vowel\n");

    }
    return EXIT_SUCCESS;
}