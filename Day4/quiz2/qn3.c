#include <stdio.h>
int main()
{
    int size,start=-1,end=-1,x;
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
    for(int i=0;i<size-1;i++)
    {
        if(start==-1 && arr[i]==x)
        {
            start=i;
        }
        else if(start!=-1 && arr[i+1]!=arr[start] && arr[i]==x)
        {
            end=i;
            break;
        }
    }
    if(start=-1 && arr[size-1]==x)
    {
        start=size-1;
        end=start;
    }
    if(start!=-1 && end==-1)
    {
        end=start;
    }
    printf("%d %d",start,end);
    return 1;
}
