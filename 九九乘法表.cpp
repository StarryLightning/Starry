#include<stdio.h>
int main(void)
{
	int i,j;
	printf("1   2   3   4   5   6   7   8   9\n");
	printf("-   -   -   -   -   -   -   -   -\n");
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			printf("%-2d  ",i*j);
		}
		printf("\n");
	}
	printf(" \n");
	printf("1   2   3   4   5   6   7   8   9\n");
	printf("-   -   -   -   -   -   -   -   -\n");
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(i>=j)
			{
				printf("%-2d  ",i*j);
			}
		}
		printf("\n");
	}
	printf(" \n");
	printf("1   2   3   4   5   6   7   8   9\n");
	printf("-   -   -   -   -   -   -   -   -\n");
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(i<=j)
			{
				printf("%-2d  ",i*j);
			}
			else
			{
				printf("    "); 
			}
		}
		printf("\n");
	}
	return 0;
}
