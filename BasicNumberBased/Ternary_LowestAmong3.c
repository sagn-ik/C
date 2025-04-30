#include <stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter a number: \n");
    scanf("%d", &n1);
    printf("Enter a number: \n");
    scanf("%d", &n2);
    printf("Enter a number: \n");
    scanf("%d", &n3);
    int res=n1;
    res=(n1<n2)?((n1<n3)?n1:n3):((n2<n3)?n2:n3);
    printf("Lowest: %d\n", res);
    return 0;
}
