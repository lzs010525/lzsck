#include <stdio.h>

int fib (int n);

int main ()
{
	int n;
	printf ("请输入第n个斐波那契数：");
	scanf ("%d",&n);
	printf ("这个数是：%d",fib (n));	
}

int fib (int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return fib (n-1) + fib (n-2);
}
