#include<stdio.h>
#include<math.h>
int sumofdigitals(int n ){
	if (n==0){
		return 0 ;
	}
	return abs(n%10)+sumofdigitals(n/10);
}
	int main(){
		int number;
		printf("enter a no ");
		scanf("%d",&number);
		int result = sumofdigitals(number);
		printf("sum of digits :%d\n",result);
		return 0 ;
	}	