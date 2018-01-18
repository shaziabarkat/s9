#include<stdio.h>
int main()
{
	int yr;
	printf("enter a yr");
	scanf("%d",&yr);
	if(yr%4==0)
	{
		if(yr%100==0)
		{
			if(yr%400==0)
			{
				printf("leap yr");
			}
			else
			{
				printf("no leap");
			}
		}
		else
		{
			printf("leap yr");
		}
	}
	else
	{
		printf("no leap");
	}
	return 0;
