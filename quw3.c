 #include <stdio.h>
int main() {
int n=5 ;
    for(int  i = 1; i <= 5; i++) {
        for(int j = 1; j <=5; j++) {
			if (i+j==6&&i%2==0){
            printf("0");
        }
else if (i+j==6&&(i%2)!=0){
printf("1");
}
		else {
			printf(" ");
		}
		}
        printf("\n");
    }
    return 0;
}