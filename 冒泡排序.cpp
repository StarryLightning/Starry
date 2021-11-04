#include<stdio.h>
void bubble_sort(int arr[],int sz);//将数据排序成升序;
int main(void)
{
	int arr[]={9,8,7,6,5,4,3,2,1,0};
	int i;
	int sz=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,sz);
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
void bubble_sort(int arr[],int sz)
{
	int i;
	for(i=0;i<sz-1;i++)
	{
		int flag=1;//用于判断是否有序的标志变量;
		//下面进行每一趟排序;
		int j;
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=0;//若无序，则标志变量置为0; 
			}
		}
		if(flag==1)//若有序，则可以提前终止排序; 
		{
			break;
		}
	}
}
