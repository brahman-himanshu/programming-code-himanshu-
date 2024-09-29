#include<stdio.h>
int main (){
	//print square and its diagonal 
//to solve this problem first we have to create a matrix of 5/5 and then we have to see the vlaue of all the other element value except 
	// the boundary of the square and the diagonal
	printf("square with its diagonal\n");
	for( int i = 1 ; i<=5;i++) {
		for ( int j=1;j<=5;j++){
		if 	 (( i==2&&j==1 )|| (i==2&&j==2 )|| (i==2&&j==4) || (i==2&&j==5)||(i==3&&j==1)|| (i==3&&j==2)|| (i==3&&j==4)|| (i==3&&j==5 )|| (i==4&&j==1) || (i==4&&j==2)||(i==4&&j==4)|| (i==4&&j==5)|| (i==5&&j==1)||( i==5&&j==2 )|| (i==5&&j==4 )|| (i==5&&j==5)){
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
    return 0;
	}