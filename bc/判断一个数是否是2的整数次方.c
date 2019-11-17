#include <stdio.h>
#include <string.h>

int main (void)

{
	int n;
	
	printf ("输入一个整数n：");
	scanf ("%d",&n);
	while (n/2 != 1)
	{
	if (n%2 != 0)
		{
			printf ("n不是2的整数次方");
			break;
		}
	else
		n /= 2;
	}
	if (n/2 == 1)
		printf ("n是2的整数次方"); 
}


