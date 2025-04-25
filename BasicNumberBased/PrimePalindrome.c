#include <stdio.h>
int primecheck(int n)
{
    int fact=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        fact++;
    }
    if (fact==2)
    return 1;
    return 0;
}
int reverse(int n)
{
    int rev=0;
    for(int i=n;i>0;i/=10)
    {
        int b=i%10;
        rev=rev*10 + b;
    }
    return rev;
}

int checkpal(int n)
{
    int re;
    int stat=1;
    stat=primecheck(n);
    re=reverse(n);
    if(re==n)
    {
        stat=primecheck(re);
    }
    else
    stat=0;
    return stat;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(checkpal(num)==1)
    printf("\nThe given number is a PRIME PALINDROME!");
    else
    printf("\nThe given number is not a PRIME PALINDROME");
    return 0;
}
