#include <stdio.h>   
int main()
{
    int n1=0,n2=1,n3,n;
    printf("Enter value for n: ");
    scanf("%d",&n);
    printf("\n");
    printf("%d %d ",n1,n2);
    for(int i=2;i<n;i++)
    {
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}
