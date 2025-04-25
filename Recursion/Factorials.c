#include <stdio.h>
int fact(int n)
{
    if(n==1)
    return 1;
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    int f=fact(num);
    printf("\n Factorial: %d",f);
    return 0;
}
