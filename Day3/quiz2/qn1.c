#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1,n2;
    printf("size of the strings:");
    scanf("%d %d",&n1,&n2);
    char str1[n1],str2[n2];
    printf("Enter the strings:");
    scanf("%s %s",str1,str2);
    int len1=strlen(str1);
    int len2=strlen(str2);
    if(len1!=len2)
    {
        printf("Not a Anagram");
        return 1;
    }
    for(int i=0;i<len1;i++)
    {
        for(int j=i+1;j<len1;j++)
        {
            if(str1[i]>str1[j])
            {
                char temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
        }
    }
    for(int i=0;i<len2;i++)
    {
        for(int j=i+1;j<len2;j++)
        {
            if(str2[i]>str2[j])
            {
                char temp=str2[i];
                str2[i]=str2[j];
                str2[j]=temp;
            }
        }
    }

    for(int i=0;i<len1;i++)
    {
        if(str1[i]!=str2[i])
        {
            printf("Not a anagram");
            return 1;
        }
    }
    printf("Anagram");
    return 1;
}