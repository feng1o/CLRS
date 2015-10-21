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
// 				array[j] = key; //这句放在while例外的区别很大，这里没有考虑插入排序前面的已经是有序的，只要找到插入地方就ok
// 			}
// 				j--;
// 			}		
		while(j>=0 && array[j]>key)
		{
			array[j+1] = array[j];
			j--;
		}
		array[j+1] = key; //在第二个while外，，重点，这句少执行很多次
	}
		printf("%d \n");
	for (k =0 ;k<n;k++)
	{
		if (k==0)
			printf(" sort array :");
		printf("%d ",array[k]);
	}
}

