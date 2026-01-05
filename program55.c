#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0, iFrequency = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency++;
            break;                  //Optimization
        }
    }

    if(iFrequency == 0)             //No Factors
    {
        return true;
    }
    else                            //At least one factor
    {
        return false;
    }
}

int main()
{
    int iValue = 0, bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is a prime number",iValue);
    }
    else
    {
        printf("%d is not a prime number",iValue);
    }

    return 0;
}

/*
    Time Complexity : For prime - N/2
    Time Complexity : For non prime - either 1(for even) or 2(for odd)
*/