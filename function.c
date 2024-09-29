#include<stdio.h>
void sub(){
	int a1 , b1 , sub =0;
 printf("enter a two values = ");
 scanf("%d%d",&a1,&b1);
 sub=a1-b1;
 printf("sub = %d\n",sub);
}
void div()
{
	int a2,b2;
	int div;
	printf("\nenter a two no a2 and b2");
	scanf("%d%d",&a2,&b2);
	div=a2/b2;
	printf("\ndivide = %d",div);
}
	
  void sum  (){
	int  a , b, sum=0;
	printf("\nenter a  no ");
	scanf("%d%d",&a,&b);
	sum = a + b ;
	printf("sum = %d\n",sum);
}
void mul()
{
	int a3 , b3;
	int mul;
	printf("enter two no of mul \n");
	scanf("%d%d",&a3,&b3);
	mul = a3*b3;
	printf("\nmultiply = %d",mul);
}
	int main ()
	{
	printf("hello\n ");
	sub();
	div();
	sum();
	mul();
}