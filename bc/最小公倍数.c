#include <stdio.h>

int main ()

{
	int x,y,a,b;
	
	printf ("����x��y��ֵ��");
	scanf ("%d%d",&x,&y);
	a=1;
	for (x;x * a % y != 0;a++);
	b = x * a;
	printf ("������%d��",b);
} 
