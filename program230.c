#include<stdio.h>

void CountAll(char str[])
{
    int iCountSmall = 0;
    int iCountCapital = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCapital++;
        }
        else
        {
            iCountSmall++;
        }
        str++;
    }

    printf("Count of small : %d",iCountSmall);
    printf("\nCount of capital : %d",iCountCapital);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s\n",Arr);

    CountAll(Arr);

    return 0;
}