#include<stdio.h>

int CountVowels(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || 
        (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
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

    iRet = CountVowels(Arr);

    printf("Count of vowels is : %d\n",iRet);

    return 0;
}