#include<stdio.h>
int main()
{
	int i,j,n;
	char ch;
	printf("���������εķ��ţ�\n");	
	scanf("%c",&ch);
	printf("���������ε�������\n"); 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=1;j<2*n;j++)
		{
		if(j==n-i||j==n+i||i==n-1) 
		printf("%c",ch);
		else
		printf(" ");
		}
	}
}
