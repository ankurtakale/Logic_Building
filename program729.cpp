#include<iostream>
#include<stdio.h>

using namespace std;

void strRevDisplay(char *str)
{
    if(*str != '\0')
    {
        strRevDisplay(str+1);
        cout<<*str<<"\n";
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^\n]s",Arr);

    strRevDisplay(Arr);

    return 0;
}