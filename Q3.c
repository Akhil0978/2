#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],c=0;
    int i,count=0;
    printf("Enter a string : \n");
    fgets(s,1000,stdin);
    while(s[c]!='\0')
    {
        if(s[c]=='a'  ||  s[c]=='A'  ||  s[c]=='e'  ||  s[c]=='E'  ||  s[c]=='i'  ||  s[c]=='I'  ||  s[c]=='o'  || s[c]=='O'  || s[c]=='u'  ||  s[c]=='U')
        count ++;
        c++;
    }
    printf("No. of vowels is %d ",count );
    return 0;
}
