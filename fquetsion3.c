#include<stdio.h>
long int binary (int num);
int main (void)
{
	int num ;
	printf("enter a number ");
	scanf("%d",&num);
	printf("decimal=%d,binary =%1d\n",num,binary(num));
	return 0;
}
long int binary (int num) 
{
	long a=1,bin=0,rem;
	while(num>0)
	{
		rem=num%2;
		bin=bin+rem*a;
		num/=2;
		a*=10;
	}
	return bin ;
}