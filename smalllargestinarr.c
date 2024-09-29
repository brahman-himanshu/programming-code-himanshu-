#include<Stdio.h>
int main (){
	int arr[10]={1,8,9,5,6,7,3,4,2,0};
	int small , largest;
	small=largest=arr[0];
	for (int i = 1 ; i<10;i++){
	if (arr[i]<small ){
		small=arr[i];
	}
	if (arr[i]>largest){
		largest=arr[i];
	}
	}
	printf("value of smallest is = %d\n value of  largest is = %d\n",small , largest );
	return 0 ;
}