#include<stdio.h>

int CountSmall(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 97) && (*str <= 122))
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

    iRet = CountSmall(Arr);

    printf("Number of small characters are : %d\n",iRet);

    return 0;
}