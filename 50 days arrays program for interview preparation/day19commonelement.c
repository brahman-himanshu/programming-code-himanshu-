#include<stdio.h>
int main (){
int arr1[]={1,5,10,20,40,80};
int arr2[]={6,7,20,40,80};
int arr3[]={3,4,15,20,30,70,80,120};
int n1=sizeof(arr1)/sizeof(arr1[0]);
int n2=sizeof(arr2)/sizeof(arr2[0]);
int n3=sizeof(arr3)/sizeof(arr3[0]);
int i=0;
int j =0;
int k=0;
printf("common element : ");
while (i<n1&&j<n2&&k<n3){
	if (arr1[i]==arr2[j] && arr1[i]==arr3[k]){
		printf("  %d",arr1[i]);
	i++;
	j++;
	k++;
	}
	else if (arr1[i]<arr2[j]){
		i++;
	}
	else if (arr2[j]<arr3[k]){
		j++;
	}
	else {
		k++;
	}
}
	printf("\n");
	return 0;
}