#include<stdio.h>
int main (){
	int r ;
	int pi = 3.14;
	printf("enter the no to print the area and circumference : \n" );
	scanf("%d",&r);
	int area = pi*r*r;
	int circumference=2*pi*r;
	printf("the area is = %d and circumference is = %d ",area , circumference);
	return 0;
}