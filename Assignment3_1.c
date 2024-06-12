//Write a program which accept one number from user and print 
//that number of even numbers on screen

#include<stdio.h>
void PrintEven(int iNo)
{
    if (iNo<=0)
    {
        return;
    }
    int iCnt;
    for(iCnt=1;iCnt<=2*iNo;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
        
    }
}
int main()
{
    int iValue=0;
    printf("Enter the Number \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}