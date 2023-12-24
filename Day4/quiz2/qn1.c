#include <stdio.h>
int max(int a[],int n)
{
    int lar=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>lar)
        {
            lar=a[i];
        }
    }
    return lar;
}
int main()
{
    int size,first,second,index;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter the numbers:\n");
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    first=max(arr,size);
    for(int i=0;i<size;i++)
    {
        if(arr[i]==first)
        {
            arr[i]=0;
        }
    }
    second=max(arr,size);
    printf("Second largest: %d ",second);
    return 1;
}
