#include<iostream>
#include<stdio.h>

using namespace std;

int Summation(int Brr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    while(iCnt < iSize)
    {
        iSum = iSum + Brr[iCnt];
        iCnt++;
    }

    return iSum;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    int iRet = 0;

    iRet = Summation(Arr,5);

    cout<<"Sum of all elements is : "<<iRet<<"\n";

    return 0;
}