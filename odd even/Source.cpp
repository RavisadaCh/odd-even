#include<stdio.h>
int main()
{
	int a;
	printf("Enter an interger : ");
	scanf_s("%d", &a);
	if(a%2 == 0)
	{
		printf("This interger is even.\n");
	}
	else
	{
		printf("This interger is odd.\n");
	}
	return 0;
}