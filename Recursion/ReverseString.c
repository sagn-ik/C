#include <stdio.h>
char rev[50];
int flag=0;
void reverse(int n, char ch[])
{
    rev[flag++]=ch[n];
    if(n!=0)
    {
        reverse(n-1, ch);
    }
}
int main()
{
    printf("Enter a string: ");
    char s[50];
    gets(s);
    int n=strlen(s);
    reverse(n-1,s);
    printf("\n Reverse: %s", rev);
    return 0;
}
