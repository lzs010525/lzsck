#include <stdio.h>
#include <stdlib.h>
#define a1 8
#define a2 7
#define a3 6
#define a4 9
#define a5 44
#define a6 7

int main ()
{
	int a [] = {a1 , a2 , a3 , a4 , a5 , a6};
	int n = sizeof (a) / sizeof (a [0]);
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
