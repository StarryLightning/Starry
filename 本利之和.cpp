#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
	float rate,capital,n,deposit;
	rate=0.0225;
	printf("����ĳ���еĶ��ڴ��������Ϊ2.25%�������Ϊn�꣬����Ϊcapital������n���ı���֮��deposit:\n");
	printf("������ʱ��n�뱾��capital:\n");
	printf("input n,capital:\n");
	scanf("%f",&n);
	scanf("%f",&capital);
    double C=pow(1+rate,n);
    deposit=capital*C;
    printf("����֮��Ϊ:\n");
	printf("%lf",deposit);
	return 0;
}
