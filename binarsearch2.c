#include<Stdio.h>
int main (){
	int arr[]={1,2,3,4,5};
	int n=5,low=0,up=n-1,mid;
	int searcelemen=6;
	int  found=0;
	while (low<=up){
		mid = (up+low)/2;
		if (arr[mid]==searcelemen){
			printf("elemnt found ");
			found =1;
			break ;
		}
      else if (arr[mid]<searcelemen){
		 low =mid+1;
	 }
	 else{
		 up=mid-1;
	 }
	}
	 if (!found){
		 printf("element not found ");
	 }
	 return 0;
}