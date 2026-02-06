#include<stdio.h>

int CountOccurence(char str[],char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue = '\0';
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s\n",Arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);           // Initial space will work for all operating systems

    iRet = CountOccurence(Arr,cValue);

    printf("Number of occurences : %d\n",iRet);

    return 0;
}