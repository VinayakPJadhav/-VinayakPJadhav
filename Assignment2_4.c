//Accept two number from user and Display first number in  second number 
//in second number  of times
# include<stdio.h>

void Display(int iNo ,int iFrequency)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iFrequency;iCnt++)
    {
        if(iCnt<=iFrequency)
        {
            printf("%d\t",iNo);
        }
        
    }
}
int main()
{
    int iValue1=0;
    int iCount=0;
    printf("Enter the Number :");
    scanf("%d",&iValue1);

    printf("Enter the Frequency:");
    scanf("%d",&iCount);

    Display(iValue1,iCount);
    return 0;
}