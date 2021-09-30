#include<stdio.h>
#include<math.h>
#define o 1e-07
int main(void)
{
	float a,b,c,x1,x2,d;
	scanf("%f %f %f",&a,&b,&c);
	d=(float)sqrt(b*b-4*a*c);
	x1=(-b+d)/(2*a);
	x2=(-b-d)/(2*a);
	if(b*b-4*a*c>o) {
	printf("x1=%.2f\nx2=%.2f\n",x1,x2);
	}
	else if((d<o)&&(d>-o))
    {
    	x1=x2=(-b)/(2*a);
    	printf("x1=x2= %.2f",x1,x2);
	}
	else
	{
	printf("No solution");
}

	return 0;
}
