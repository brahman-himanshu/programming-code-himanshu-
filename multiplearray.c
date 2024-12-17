#include<stdio.h>
int main (){
	int arr1[3][3];
	int arr2[3][3];
	int arr3[3][3];
	int i , j ;
	printf("enter the  first array element : \n ");
	for  (int  i=0;i<3;i++){
	for (int j =0 ;j<3;j++){
		scanf("%d",&arr1[i][j]);
	}
	}
	printf("enter the second  array element : \n ");
     for  (int i =0 ;i<3;i++){
		 for (int j=0;j<3;j++){
			 scanf("%d",&arr2[i][j]);
		 }
	 }
       //multiply two  matrix 
	 for (int i=0;i<3;i++){
		 for (int j=0;j<3;j++){
			  arr3[i][j]=arr1[i][j] * arr2[i][j];
		 }
	 }
	 //print the multiple of  two matrix 
	 printf(" multiply of two matrix is = \n ");
	 for (int i=0 ;i<3;i++){
		 for(int j =0 ;j<3;j++){
			 printf("%d\t",arr3[i][j]);
		 }
	 }
	 return 0;
}