#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int n,x; 
	printf ("输入想要排序的个数n：");
	scanf ("%d",&n);
	int a [n];
	printf ("输入要排序的%d个数字\n",n);
	for (x = 0; x < n; x ++)
	{
		scanf ("%d", &a [x]);
	}
	int i , j , k;
	for (i = 0; i < n-1; i ++)
	{
		for (j = i+1; j < n; j ++)
		{
			if (a [i] > a [j])
			{
				k = a [i];
				a [i] = a [j];
				a [j] = k;
			}
		}
	}
	for (i = 0; i < n; i ++)
		printf ("%d ",a [i]);
	return 0;
}
