#include<stdio.h>
int  main (){
	int arr[5]={1,2,3,4,5};
	int n=5,search=4,found =0,mid ,up=n-1,low=0;
	while (low<=up){
		mid=(low+up)/2;
		if (mid == search){
			printf(" element found = %d and index is = %d ", search, mid );
			found = 1;
			break;
		}
		else if (arr[mid]<search){
			low = mid + 1;
		}
		else {
			high = mid -1;
		}
	}
	if (!found){
		printf("element not found ");
	}
	return 0;
}
	