8#include <stdio.h>
int arr[50];
int find(int l, int u, int num)
{
    if(l<=u){
    int mid=(l+u)/2;
    if(arr[mid]==num)
    return mid;
    if(num>arr[mid])
    return find(mid+1,u,num);
    else
    return find(l,mid-1,num);
    }
    else
    return -11;
}

int main()
{
    printf("Enter value for array: \n");
    int size;
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("Enter number: \n");
        scanf("%d",&arr[i]);
    }
    printf("Enter value to search: \n");
    int num;
    scanf("%d",&num);
    int status=find(0,size-1,num);
    if(status!=-11)
    printf("Value found at: %d\n",status+1);
    else
    printf("Value not found");
    return 0;
}
