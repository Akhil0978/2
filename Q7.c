#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[1000],c=0;
    int i,alphabets=0,digits=0,special=0;
    printf("Enter a string : \n");
    fgets(str,1000,stdin);
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z')  ||  (str[i]>='A' && str[i]<='Z'))
        {
            alphabets++;
        }
        else if (str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else
            special++;
        i++;
    }
    printf("The no. of alphabets is %d\n ",alphabets);
    printf("The no. of digits is %d \n",digits);
    printf("The no. of special characters is %d ",special);
    return 0;
}

