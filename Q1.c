#include<stdio.h>
int main()
{
    char str[100];
    int i,l=0;
    printf("Enter a string : \n");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        l++;
    }
    printf("The length of string is : %d",l);
    return 0;
}
