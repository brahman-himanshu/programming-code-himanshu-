// count the search number 
#include<stdio.h>
	int count(int arr[], int n, int x) {
	   int count = 0;
	   printf("enter the array number : \n");
	   for (int i=0;i<5;i++){
		   scanf("%d",&arr[i]);
	   }
	   for(int i = 0;i<n;i++) {
	       if (x == arr[i]) {
	           count = count + 1;
	       }
	   }
	   if (count > 0) {
	       return count;
	   } else {
	       return 0;
	   }
	}

int main() {
	int arr[5];
	int searchnumbers;
	printf("Enter the item to be counted:");
	scanf("%d",&searchnumbers);
	printf("count of %d : =  %d",searchnumbers,count(arr,5,searchnumbers));
	
	return 0;
}	