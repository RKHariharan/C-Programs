#include <stdio.h>
int main() 
{
    int x=1,y=2,temp=5;
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            if(j<temp)
            {
                printf("  ");
            }
            else
            {
                if(i%2==0)
                {
                    printf("%d ",y);
                    y=y+2;
                }
                else
                {
                    printf("%d ",x);
                    x=x+2;
                }
            }
        }
        printf("\n");
         temp--;
    }
}
