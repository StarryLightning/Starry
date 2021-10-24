#include<stdio.h>
int decompose(int n);//质因数分解; 
int prime(int n);//素数;
int main(void)
{
	int n;
	int c;
	scanf("%d",&n);
	c=prime(n);
	if(c)
	decompose(n);
	else
	printf("It is a prime number");
} 
int prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0&&i<n)
		break;
	}
	if(i==n)
	return 0;
	if(i<n)
	return 1;
}
int decompose(int n)
{
	int j;
	int m=n;
	printf("%d=",n);
	for(j=2;j<=n;j++)
	{
		while(n%j==0)
		{
			printf("%d",j);
			if(n/j>2)
			printf("*");
			n=n/j;
		}
	}
}
