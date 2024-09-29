#include<stdio.h>
#include<math.h>
int isprime(int n );
int main (void)
{
	int num;
	printf("enter a number ");
	scanf("%d",&num);
	if (isprime(num))
		printf("number is prime\n");
	else 
         printf(" number is not prime\n");
	 return 0;
}
int isprime (int n )
{
	int i ;
	for (i=2;i<=sqrt(n);i++)
		if (n%i==0)
			return 0;
return 1 ; 
}
	
	