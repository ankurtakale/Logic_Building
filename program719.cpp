#include<iostream>
#include<stdio.h>

using namespace std;

int Countapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^\n]s",Arr);

    iRet = Countapital(Arr);

    printf("Capital count is : %d\n",iRet);

    return 0;
}