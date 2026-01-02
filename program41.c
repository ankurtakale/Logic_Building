#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(int iCnt = 2; iCnt <= iNo; iCnt+=2)
    {
        printf("%d\t",iCnt);
    }
}

//  Time Complexity : O(N/2)

int main()
{
    int iValue = 0;
    
    printf("Enter Frequency : \n");
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0;
}