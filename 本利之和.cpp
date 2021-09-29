#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
	float rate,capital,n,deposit;
	rate=0.0225;
	printf("假设某银行的定期存款年利率为2.25%，存款期为n年，本金为capital，计算n年后的本利之和deposit:\n");
	printf("输入存款时间n与本金capital:\n");
	printf("input n,capital:\n");
	scanf("%f",&n);
	scanf("%f",&capital);
    double C=pow(1+rate,n);
    deposit=capital*C;
    printf("本利之和为:\n");
	printf("%lf",deposit);
	return 0;
}
