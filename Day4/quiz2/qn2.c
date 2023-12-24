#include <stdio.h>
int main()
{
    int size,x;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter a value for X: ");
    scanf("%d",&x);
    printf("Enter the numbers:\n");
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==x)
            {
                printf("Yes");
                return 1;
            }
        }
    }
    printf("No");
    return 1;
}
