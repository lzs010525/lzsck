#include <stdio.h>
int main (void)
{
	int i,j,a,b,n,k=65;
	printf("ÊäÈë½ğ×ÖËş½×Êı£º");
	scanf("%d",&n);
	b=n; 
	for(i=1;i<n+1;i++)
	{
		k=65;
		for(a=b;a>0;a--)
		{
			printf(" ");
		}
		b--;
		for(j=1;j<i+1;j++)
		{
			printf("%c",k);
			k++;
		}	
		for(j=1;j<i;j++)
		{
			k--;
			printf("%c",k-1);
		}
		printf("\n");
	}
 } 
