#include<stdio.h>
int even(int n ){
		for (int i = 1; i<=3;i++){
			for (int j = 1 ; j<=3;j++){
				if (i==j){
					printf("*");
				}
				else{
					printf(" ");
				}
		}
		printf("\n");
		}
	}
	int odd(int n){
		for (int i=1;i<=3;i++){
			for (int j=1 ; j<=3 ; j++ ){
			if ((i+j)==4){
				printf("*");
			}
			else{
				printf(" ");
			}
			}
			printf("\n");
			
		}
	}
		
		int  main () {
			int n , primary , secondary  ;
			printf("enter a no ");
			scanf("%d",&n);
			if (n%2==0){
				printf("primary diagonal :\n");
				even (n);
			}
			else {
				printf("secondary diagonal: \n");
				odd(n);
			}
			return 0 ;
		}