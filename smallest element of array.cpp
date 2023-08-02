#include <stdio.h>
int main()
{
	int a[8],i,min;
	printf("enter array elements");
	for (i=0;i<8;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for (i=0;i<8;i++)
	{
		if (a[i]<min)
		{
			min=a[i];
		}
	}
	printf("the largest element of array:%d",min);
	return 0;
}
