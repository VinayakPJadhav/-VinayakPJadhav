// Accept one Charachetr from user and check whether that Character is vowel(a,e,i,o,u) or not.
#include<stdio.h>


# define TRUE 1
# define FALSE 0
typedef int BOOL;
BOOL ChkVowel(char CValue)
{
    if(CValue=='A'||CValue=='E'||CValue=='I'||CValue=='O'||CValue=='U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main ()
{
    char cValue='\0';
    BOOL bRet= FALSE;

    printf("Enter Character \n");
    scanf("%c",&cValue);

    bRet=ChkVowel(cValue);
    if(bRet==1)
    {
        printf("It Is Vowel");
    }
    else 
    {
        printf("It Is NOT Vowel");
    }
    return 0;
}