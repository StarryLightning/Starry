#include<stdio.h>
#include<math.h>
int main(void)
{
	float a,b,c,x1,x2,d;
	printf("请输入一元二次方程第三个参数a,b,c且a不为0\n");
	printf("input a,b,c:");
	scanf("%f,%f,%f",&a,&b,&c);
	d=(float)sqrt(b*b-4*a*c);
	x1=(-b+d)/2*a;
	x2=(-b-d)/2*a;
	printf("一元二次方程的解为:\n");
	printf("%f\n%f\n",x1,x2);
	return 0;
}
