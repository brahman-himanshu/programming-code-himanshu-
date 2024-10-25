#include<stdio.h>
int main (){
	int a , b , c ;
	printf(" enter the three no a , b and c : \n ");
	scanf("%d %d %d",&a,&b,&c);
	if (a==b&&a==c){
		printf(" no are equal : " ) ;
	}
	else if (a>b&&a>c ){
		printf(" a is the gratest no = %d ", a);
	}
	else if (b>a&&b>c){
		printf(" b is the greatest no = %d ", b );
	}
	else {
		printf(" c is the greatest no  = %d  ", c );
	}
	return 0;
}