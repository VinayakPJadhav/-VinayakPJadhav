// Accept number from user and check whether number is even or odd

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo % 2)==0)
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
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    bRet=ChkEven(iValue);

    if(bRet==1)
    {
        printf("Given Number is Even");
    }
    else
    {
        printf("Given Number is Odd");
    }
    return 0;
}