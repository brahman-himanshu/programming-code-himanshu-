#include<stdio.h>
int main (){
int  arr[]={1,2,3,4,5};
int searchelment=3,n=5,found=0;
for (int i=0;i<5;i++){
	if (searchelment==arr[i]){
		printf("%d element found ",searchelment);
		found= 1;
		break;
	}
}
if (!searchelment){
	printf("not found ");
}
return 0;
}
	