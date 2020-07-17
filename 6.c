#include<stdio.h>
#include<conio.h>

/***********************************************************************************
AIM           - WAP  to input two numbers and check the no. is divisible by 3 or not
OBJECTIVE     - use of only "if" statement
************************************************************************************/

int main()

{
	printf("AIM - WAP  to input two numbers and check the no. is divisible by 3 or not\n");
    int n;
    printf("Enter the value of n :");
    scanf("%d", &n);
    
	if(n%3==0)
	printf("No. is divisble by 3");
	
    getch();
    return 0;
}

