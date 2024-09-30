#include<stdio.h>
int main (){
	int  count0=0,count1=0;
	int maxcount1=0,index=0;
	int arr[4][5]={{1,0,1,0,1},{0,0,1,1,1},{0,1,1,1,1},{1,0,1,0,1}};
	for(int  i=0;i<4;i++){
		count0=0 ,count1=0;
		for (int j=0;j<5;j++){
			if (arr[i][j]==0){
				count0++;
			}
			else if (arr[i][j]==1){
				count1++;
		}
	}
if (count1>maxcount1){
	maxcount1=count1;
	index=1;
}
	}
	printf(" %d row and count = %d",index,maxcount1 );
return 0;
}	