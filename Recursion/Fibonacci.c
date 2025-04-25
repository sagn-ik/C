#include <stdio.h>
int series(int n)
{
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    return series(n-1)+series(n-2);
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        int c=series(i);
        printf("%d\t",c);
    }
    return 0;
}
