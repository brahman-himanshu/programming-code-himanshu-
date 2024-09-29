#include<Stdio.h>
int main (){
	int n ;
	int arr[n];
	int largest;
	printf("enter a no of  element :");
	scanf("%d",&n);
	printf("enter %d integers element :\n",n);
	for (int i = 0 ; i<n;i++){
		scanf("%d",&arr[i]);
	}
	largest=arr[0];
	for (int i = 1 ; i<n;i++){
	
	if (arr[i]>largest){
		largest=arr[i];
	}
	}
	printf(" largest  element is = %d\n", largest );
	return 0 ;
}