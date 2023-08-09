#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,arr[]={1,2,5,7,9,8,6,4,2,9,7,5,3};
	int length=sizeof(arr)/sizeof(arr[0]);
	printf("duplicate elements is given array:\n");
	{
	for(i=0;i<length;i++)
	{
		for(j=i+1;j<length;j++)
		{
			if(arr[i]==arr[j])
			printf("%d\n",arr[j]);
		}
	}
	}
	return 0;
}


