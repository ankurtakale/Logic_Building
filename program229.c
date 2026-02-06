#include<stdio.h>

int CountCapital(char str[])
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
    int iRet = 0;
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s\n",Arr);

    iRet = CountCapital(Arr);

    printf("Number of capital characters are : %d\n",iRet);

    return 0;
}