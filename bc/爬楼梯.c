#include <stdio.h>

int plt (int n);

int main ()

{
	int n,ways;
	printf ("输入楼梯阶数n：");
	scanf ("%d",&n);
	ways = plt (n);
	printf ("爬完%d阶楼梯共有%d种方法",n,ways);
}

int plt (int n)
{
	int sum;
	if (n == 1)
		sum = 1;
	else if (n == 2)
		sum = 2;
	else
		sum = plt (n-1) + plt (n-2);
	return sum;
}
