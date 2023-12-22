#include<stdio.h>
int main()
{
	char str[100],temp;
	printf("Enter the string: ");
	gets(str);
	int len=strlen(str);
	int num=0;
	for(int i=0;i<len;i++)
	{
		if(isalpha(str[i]))
		{
			temp=str[i];
			num=0;
		}
		else
		{
			num=num*10+str[i] - 48;
			if(isalpha(str[i+1]))
			{
			for(int k=0;k<num;k++)
			{
			   printf("%c",temp);
		    }
			}
		}
		printf("*");
	}
	return 1;
 }
// 		for(int j=i;j<len;j++)
// 		{
// 			if(isalpha(str[j]))
// 			{
// 				break;
// 			}
// 			else
// 		    {
// 			   num=num*10+str[i] - 48;
// 		    }
// 		}