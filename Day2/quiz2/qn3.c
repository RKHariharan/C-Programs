#include<stdio.h>
int main()
{
	char str[100],temp;
	printf("Enter the string: ");
	gets(str);
	int len=strlen(str);
	int num;
	for(int i=0;i<len;i++)
	{
		num=0;
		if(isalpha(str[i]))
		{
			temp=str[i];
			for(int j=i+1;j<len;j++)
			{
				if(isdigit(str[j]))
				{
					num=num*10+str[j] - 48;
				}
				else 
				  break;
			}
			for(int k=0;k<num;k++)
			{
				printf("%c",temp);
			}
		}
	}
	return 1;
 }
