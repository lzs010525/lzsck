#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int n,x; 
	printf ("������Ҫ����ĸ���n��");
	scanf ("%d",&n);
	int a [n];
	printf ("����Ҫ�����%d������\n",n);
	for (x = 0; x < n; x ++)
	{
		scanf ("%d", &a [x]);
	}
	int i,j,k;
	for (i = 0; i < n-1; i ++)
	{
		for (j = i+1; j > 0; j --)
		{
			if (a [j] < a [j-1])
			{
				k = a [j-1];
				a [j-1] = a [j];
				a [j] = k;
			}
			else
				break;
		}
	}
	for (i = 0; i < n; i ++)
		printf ("%d ",a [i]);
	return 0;
}
