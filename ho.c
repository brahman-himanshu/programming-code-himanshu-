#include <stdio.h>
int main() {
int n=5 ;
    for(int  i = 1; i <= 5; i++) {
        for(int j = 1; j <=5; j++) {
			if (i+j==6){
				if(i%2==0){
            printf("0");
        }
			}
		else {
			printf("1");
		}
		}
        printf(" ");
    }
    return 0;
}