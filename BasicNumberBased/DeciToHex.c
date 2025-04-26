// WAP TO ACCEPT A DECIMAL NUMBER AND CONVERT TO HEXA 
#include <stdio.h>
#include <string.h>
int main()
{
    int num=0;
    printf("Enter a number: \n");
    scanf("%d",&num);
    char hex[20];
    int flag=0;
    while(num>0)
    {
        int b=num%16;
        num=num/16;
        if(b>9)
        {
            hex[flag++]=(char)(55+b);
        }
        else
        {
            hex[flag++]=(char)(48+b);
        }

    }
    hex[flag]='\0';
    printf("Hexa: %s", strrev(hex));
    return 0;
}
