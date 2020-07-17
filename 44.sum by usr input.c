#include<stdio.h>
#include<conio.h>


/*****************************************************************************************************
AIM      -   WAP to input any 10 num and print the sum of them by using loop
OBJECT   -   use of loops
*************************************************************************************************/

int main()
{
	printf("WAP to input any 10 num and print the sum of them by using loop\n");
	int n,i,s=0;
	printf("enter the number : ");
	for(i=0;i<10;i++)
	{
		scanf("%d", &n);
	    s = s+n;
	}
	
	printf("sum = %d", s);
	getch(); 
	return 0;

}

/******************************************************************************************
the function is written below and the given above function is the main program or function
*******************************************************************************************/

int sum(int n)
{
	
	if (n==1)
	return (1);
	else
	return (n+sum(n-1));

	
}

