#include "stdio.h"

int main()
{
	int array[] = {2,3,5,6,23,3,7,1,91,236,2,23,23,23,23,526,4,47,4,7,8,8,5665,9,56,22};
	int i = 0;
	int j = 0;
	int n = sizeof(array) / sizeof(array[0]);
	int k ;
	for (k =0 ;k<n;k++)
	{
	  if (k==0)
		printf(" array is:");
		printf("%d ",array[k]);
	}
	for (i=1;i<n;i++)
	{
		int key = array[i];
		j = i - 1;
// 		while(j>=0)
// 			{
// 			if (array[j] > key)
// 			{
// 				array[j+1] = array[j];
// 				array[j] = key; //������while���������ܴ�����û�п��ǲ�������ǰ����Ѿ�������ģ�ֻҪ�ҵ�����ط���ok
// 			}
// 				j--;
// 			}		
		while(j>=0 && array[j]>key)
		{
			array[j+1] = array[j];
			j--;
		}
		array[j+1] = key; //�ڵڶ���while�⣬���ص㣬�����ִ�кܶ��
	}
		printf("%d \n");
	for (k =0 ;k<n;k++)
	{
		if (k==0)
			printf(" sort array :");
		printf("%d ",array[k]);
	}
}

