#include<stdio.h>
#include<math.h>
int cube(int n ){
	int  cube ;
	for (int i = 1; i<=n; i++){
		cube = i*i*i;
	}
	return cube ;
}
int main (){
	int n ;
printf("enter a value of n ");
scanf("%d",&n);
 int result = cube(n);
printf("enter a no %d and return output : %d  ",n,result  );
return 0 ;
}