//Accept one number from user and print that number of * on screen
#include<stdio.h>
void Display(int iNo)
{
    int iCnt=1;
    while(iCnt<=iNo)
    {
        printf("* \t");
        iCnt=iCnt+1;
    }

}
int main()
{
    int iValue=0;
    printf("Enter the Number : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}