#include<stdio.h>
int main (){
	int arr[7]={2,0,0,1,1,2,1};
	int count0=0;
	int count1=0;
	int count2=0;
	int sizeofarr=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<sizeofarr;i++){
if (arr[i]==0){
count0++;
}
else if (arr[i]==1){
count1++;
}
else if(arr[i]==2){
count2++;
}
}
for(int i=0;i<count0;i++){
	arr[i]=0;
}
for (int i =count0;i<count0+count1;i++){
	arr[i]=1;
}
for (int i=count0+count1;i<count0+count1+count2;i++){
	arr[i]=2;
}

for(int i = 0;i<sizeofarr;i++) {
	printf("%d\t",arr[i]);
}
	
printf("done the code ");
return 0;
}