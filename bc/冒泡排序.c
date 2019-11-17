#include <stdio.h>
#include <stdlib.h>
#define a1 8
#define a2 6
#define a3 9
#define a4 4
#define a5 3

int main ()
{
	int a[] = {a1 , a2 , a3 , a4 , a5};
	int n = sizeof (a) / sizeof (a[0]);
	int i , j , k;
	for (i = 1; i < n; i ++)
	{
		for (j = 0;j < n-1;j ++)
		{
			if (a [j] > a [j + 1])
			{
			k = a [j];
			a [j] = a [j + 1];
			a [j + 1] = k;
			}
		}
	}
	for (i = 0;i < n; i ++)
		printf ("%d ",a[i]);
	return 0;
} 
