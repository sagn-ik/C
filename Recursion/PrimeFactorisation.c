#include <stdio.h>
void fact(int n, int num)
{   
    if(n<=num)
    {
        if(num%n ==0)
        {
         printf("%d\t",n);
         fact(n,(num/n));
        }
        else
        {
         printf("\n");
         fact(n+1,num);
        }
    }
}

int main()
{
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    printf("Prime Factors are: \n");
    fact(2,n);
    return 0;
}
