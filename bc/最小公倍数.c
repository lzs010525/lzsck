#include <stdio.h>

int main ()

{
	int x,y,a,b;
	
	printf ("输入x和y的值：");
	scanf ("%d%d",&x,&y);
	a=1;
	for (x;x * a % y != 0;a++);
	b = x * a;
	printf ("最少切%d块",b);
} 
