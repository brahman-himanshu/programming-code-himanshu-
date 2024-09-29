#include<stdio.h>
int main (){
	//print p(pawan);
//
	printf("p\n");
	for( int i = 1 ; i<=5;i++) {
		for ( int j=1;j<=5;j++){
			if ((i+j)%2==0){
				printf("1");
			}
			else{
				printf("0");
			}
		}
		printf("\n");
	}
    return 0;
}