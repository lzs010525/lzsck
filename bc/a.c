#include <stdio.h>
#define PRAISE "You are an extiaordinary being"
int main()
{
	char name[40];
	
	printf("What's your name?");
	scanf("%s",name);
	printf("Hello, %s. %s\n",name,PRAISE);
	
	return 0;
}
