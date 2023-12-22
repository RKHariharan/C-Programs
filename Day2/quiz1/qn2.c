#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int temp=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            temp++;
        }
        else
        {
            if(temp>1)
            {
                printf("%d -> %d\n",arr[i],temp);
            }
            temp=1;
        }
    }
    return 1;

}