#include<stdio.h>
#include<math.h>
int main(void)
{
	float a,b,c,x1,x2,d;
	printf("������һԪ���η��̵���������a,b,c��a��Ϊ0\n");
	printf("input a,b,c:");
	scanf("%f,%f,%f",&a,&b,&c);
	d=(float)sqrt(b*b-4*a*c);
	x1=(-b+d)/2*a;
	x2=(-b-d)/2*a;
	printf("һԪ���η��̵Ľ�Ϊ:\n");
	printf("%f\n%f\n",x1,x2);
	return 0;
}
