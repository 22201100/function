#include<stdio.h>
int getfactorial(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int main(){
int a;
printf("n = ");
scanf("%d",&a);
printf("%d! = %d",a,getfactorial(a));
return 0;
}
























/*Problem 1: Write a C function that calculates the factorial of a given positive integer n. The function
should take n as an argument and return the factorial. 2
Input Output
n = 5 5! = 120*/
