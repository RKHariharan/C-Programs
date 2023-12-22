#include <stdio.h>
int main()
{
    char str[100];
    int len=0,spaces=0,actlen,sclen,extra=0;
    printf("Enter the string :");
    gets(str);
    len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]==' ')
         spaces++;
    }
    printf("Enter Screen length :");
    scanf("%d",&sclen);
    actlen=len-spaces;
    extra=sclen-actlen;
    for(int i=0;i<len;i++)
    {
        if(str[i]!=' ')
        {
            printf("%c",str[i]);
        }
        else
        {
            int temp=extra/spaces;
            for(int j=0;j<temp;j++)
            {
              printf("*");
            }
            extra=extra-temp;
            spaces=spaces-1;
        }
    }
    return 1;
}
