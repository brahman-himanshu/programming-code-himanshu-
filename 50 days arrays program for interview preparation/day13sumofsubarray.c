#include<stdio.h>
int main () {
int arr[]={9,6,9,8,1};
int sum=33; // sum to be checked
int startIndex = 0;
int endIndex = 0;
int isSumFound = 0;
int currentSum = 0;
for(int i=0; i<5; i++) {
	currentSum = 0;
	startIndex = i+1;
  for(int j=i; j<5; j++) {
	  endIndex = j+1;
		currentSum = currentSum +  arr[j];
		        if (sum == currentSum) {
				isSumFound = 1;
					break;
				}
	}
	if (isSumFound) break;
}
if (isSumFound) {
	printf("sum found at start index: %d to endIndex: %d",startIndex,endIndex);
} else {
	printf("sum not found in the array");
}
return 0;
	}