#include <stdio.h>
 
int calculate_mode(int number [],int n)//求众数
{
	int mode=0;
	int i;
	int counter[11]={0};
	for(i=1;i<40;i++)
	{
		counter[number[i]]++;
	}
	for(i=1;i<10;i++)
	if(counter[mode]<counter[i])
	{
		mode=i;
	}
	return mode;
}
 
double calculate_mean(int number [],int n)//求平均值
{
    int i;
    double sum=0;
 
    for(i=0;i<n;i++)
    {
        sum+=number[i];
    }
 
    return sum/n;
}
 
double calculate_median(int number [],int n)//求中位数
{
    if(n%2==0)
        return (number[n/2-1]+number[n/2])/2.0;
    else
        return number[n/2];
}
 
 
int main(void)
{
    int n,i,j,number[100]={0},temp;
    double mean,median;
    int mode;
    for(i=0;i<40;i++)
        scanf("%d",&number[i]);
 
    for(i=0;i<40;i++)//排序，方便计算
        for(j=i+1;j<40;j++)
            if(number[i]>number[j])
            {
                temp=number[i];
                number[i]=number[j];
                number[j]=temp;
            }
 
    mean=calculate_mean(number,40);
 
    median=calculate_median(number,40);
 
    mode=calculate_mode(number,40);
 
    printf("%f %f %d",mean,median,mode);
 
    return 0;
}
