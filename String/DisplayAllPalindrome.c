// WAP A PRIGRAM TO ACCEPT A SENTENCE AND DISPLAY ALL THE PAL WORDS IN A SENTENCE
#include <stdio.h>
#include <string.h>
int checkPal(char a[])
{
    int n=strlen(a);
    char rev[50];
    int i=0;
    while(a[i] != NULL)
    {
        rev[n-i-1]=a[i];
        i++;
    }
    rev[i]='\0';
    if(strcmpi(rev,a)==0)
    return 1;
    return 0;
}
int main()
{
    char s[50];
    printf("Enter a sentence: ");
    gets(s);
    int i=0, flag=0;
    char wd[10];
    printf("Palindrome Words: \n");
    while(s[i] != NULL)
    {
        if(s[i] == ' ')
        {
            wd[flag]='\0';
            int b=checkPal(wd);
            if(b==1)
            {
             printf("%s \n", wd);   
            }
            flag=0;
        }
        else
        {
            wd[flag++]=s[i];
        }
        i++;
    }
    return 0;
}
