#include <stdio.h>
#include <string.h>

int main (void)

{
	int n;
	
	printf ("����һ������n��");
	scanf ("%d",&n);
	while (n/2 != 1)
	{
	if (n%2 != 0)
		{
			printf ("n����2�������η�");
			break;
		}
	else
		n /= 2;
	}
	if (n/2 == 1)
		printf ("n��2�������η�"); 
}


