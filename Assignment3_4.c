//Accept one Character from user and convert case of that character.
#include<stdio.h>
#include<ctype.h>
void DisplayConvert(char CValue)
{
    if(putchar(toupper(CValue)))
    {
        printf("%c",CValue);
    }
    else if(putchar(tolower(CValue)))
    {
        printf("%c",CValue);
    }
    
}
int main()
{
    char cValue='\0';
    printf("Enter the Character \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0;
}