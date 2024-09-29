#include<stdio.h>
int gcdnumber(int a , int b );
int main (){
	int a,  b ;
	printf("enter a no ");
	scanf("%d",&a);
	printf("enter a no two ");
	scanf("%d",&b);
	int result = gcdnumber(a,b);
//	gcdnumber(a,b);
    printf("gcd of is  : %d",result);
	return 0 ;
}
int gcdnumber(int a , int b ){
	while(a!=b){
	if (a>b){
		a=a-b;
	}else {
		b=b-a;
	}
	}
	return a;
}