#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],c;
    int i,count=0;
    printf("Enter a string : \n");
    fgets(s,1000,stdin);
    printf("Enter the character to be searched: ");
    c=getchar();
    for(i=0;s[i];i++)
    {
        if(s[i]==c)
        {
            count++;
        }
    }

    printf("character '%c' occurs %d times \n ",c,count);
    return 0;
}
