#include <stdio.h>

void main()
{

	int i, j;

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (i = 5; i >= 1; i--) 
	{
		for (int k = 1; k <=i; k++) 
		{
			printf(" ");
		}
		for (j =5;j>=i;j--)
		{
				printf("*");	
		} 
				printf("\n");
	}

	printf("\n");

	
	for (i = 2; i <= 5; i++)
	{
		
		printf("*\n");
		for (j = 1; j <=i ; j++)
		{
				printf("*");
			
		}
		
		printf("\n");
	}
	fgetc(stdin);
}
