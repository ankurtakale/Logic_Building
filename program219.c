#include<stdio.h>

int Count(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'A')
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

    iRet = Count(Arr);

    printf("Count of a is : %d\n",iRet);

    return 0;
}