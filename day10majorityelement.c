#include<stdio.h>
int main(){
int arr[]={2,1,2,3,2,6};
int size=sizeof(arr)/sizeof(arr[0]);
int majorityElement=-1;
for(int i=0; i<size; i++){
	int count =0;
for(int j=0; j<size; j++){
if(arr[i]==arr[j]){
count++;
}
}-
if(count>size/2){
 majorityElement=arr[i];
 break;
}
}
if( majorityElement!=-1){
printf("The majority element is: %d ", majorityElement);
}
else{
printf("There is no  majority element ");
}
return 0;
}