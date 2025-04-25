#include <stdio.h>
#include <Math.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sum=0;
    for(int i=num; i>0; i/=10)
    {
        int b=i%10;
        b=pow(b,3);
        sum=sum+b;
    }
    if(sum==num)
    {
        printf("IT IS A ARMSTRONG NUMBER");
    }
    else
    {
        printf("IT IS NOT A ARMSTRONG NUMBER");
    }
    return 0;
}
