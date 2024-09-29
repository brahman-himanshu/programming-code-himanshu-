//2d array with pointer 
#include<stdio.h>
int main (){
	int arr[3][4]={{10,11,12,13},{20,21,22,23},{30,31,32,33}};
printf("print  the array sorted = \n");
	for (int  i=0;i<3;i++){
		for (int j=0;j<4;j++){
			//printf(" %d", arr[i][j]);
			printf(" %p",(*(arr+i)+j));//adress fo i and  jth values 
		}
		printf("\n");;
	}
	for(int i=0;i<3;i++){
		for (int j=0;j<4;j++){
			printf(" %d",*(*(arr + i)+j));//values of i and jth values 
		}
		printf("\n");
	}
	int i,j;
	printf("\n%p",arr);//adress to the oth values
	printf("\n%p",arr+1);//adress of ith values 
	printf("\n%p",arr+2);
	printf("\n%d",*(*arr));
	printf("\n%d",*(*arr)+3);//values of i the values 
	//printf("\n%d",*(*(arr+i)+j));
	printf("\ndone the code ");
	return 0;
}