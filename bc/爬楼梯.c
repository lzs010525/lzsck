#include <stdio.h>

int plt (int n);

int main ()

{
	int n,ways;
	printf ("����¥�ݽ���n��");
	scanf ("%d",&n);
	ways = plt (n);
	printf ("����%d��¥�ݹ���%d�ַ���",n,ways);
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
