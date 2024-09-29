#include<stdio.h>
int main (){
	//print vishal 
// printf first letter of vishal 
	printf("print first letter of vishal(p)\n");
	for( int i = 1 ; i<=6;i++) {
		for ( int j=1;j<=3;j++){
			if (( i==1&&j==2 )|| (i==1&&j==3 )|| (i==1&&j==4) || (i==1&&j==5)|| (i==1&&j==6)|| (i==2&&j==2)||(i==2&&j==3)||( i==2&&j==4 )|| (i==2&&j==5 )|| (i==2&&j==6) || (i==3&&j==1)|| (i==3&&j==3)|| (i==3&&j==4)||(i==3&&j==5)|| (i==3&&j==7 )|| (i==4&&j==1) || (i==1&&j==5)|| (i==1&&j==6)|| (i==2&&j==2)||(i==2&&j==3)||( i==2&&j==4 )|| (i==2&&j==5 )|| (i==2&&j==6) || (i==3&&j==1)|| (i==3&&j==3)|| (i==3&&j==4)||(i==3&&j==6)){
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
    
	}