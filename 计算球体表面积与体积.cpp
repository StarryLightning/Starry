#include<stdio.h>
int main(void)
{
	const double PI=3.14159;
	double r,S,V;
	printf("请输入球体的半径:\n");
	printf("input r");
	scanf("%lf",&r);
	S=4*PI*r;
	V=4*PI*r*r*r/3;
	printf("球体的表面积和体积分别为:\n");
	printf("%lf\n%lf\n",S,V);
	return 0;
}
