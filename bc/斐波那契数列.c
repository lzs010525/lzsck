#include <stdio.h>

int fib (int n);

int main ()
{
	int n;
	printf ("�������n��쳲���������");
	scanf ("%d",&n);
	printf ("������ǣ�%d",fib (n));	
}

int fib (int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return fib (n-1) + fib (n-2);
}
