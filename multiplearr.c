#include<stdio.h>
int main (){
	int i ,j;
int arr1[4][4]={{1,2,3,4},
{1,2,3,4},
{1,2,3,4},
{1,2,3,4},
};
int arr2[4][4]={{2,3,4,5},
{1,2,3,4},
{3,2,1,4},
{5,4,3,2},
};
int result[4][4];
for (int i=0;i<4;i++){
	for (int j =0;j<4;j++){
 result[i][j]=arr1[i][j]*arr2[i][j];
	}
}
 for (int i=0;i<4;i++){
	 for  (int j=0;j<4;j++){
printf(" %d\t",result[i][j]);
	 }
	 printf("\n");
 }
return 0;
}