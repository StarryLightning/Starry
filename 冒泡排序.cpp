#include<stdio.h>
void bubble_sort(int arr[],int sz);//���������������;
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
		int flag=1;//�����ж��Ƿ�����ı�־����;
		//�������ÿһ������;
		int j;
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=0;//���������־������Ϊ0; 
			}
		}
		if(flag==1)//�������������ǰ��ֹ����; 
		{
			break;
		}
	}
}
