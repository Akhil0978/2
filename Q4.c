#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    printf("Enter a string : \n");
    fgets(s,1000,stdin);
    printf("%s",strupr(s));
    return 0;
}
