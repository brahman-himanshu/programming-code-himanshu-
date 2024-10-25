#include<stdio.h>
int main (){
int n ,factorial=1;
printf(" enter the number to print the  factorial of n number =  \n");
scanf("%d",&n); 
for (int i =0 ;i<=n ;i++){
factorial=factorial*i;
}
printf(" factorial of  n(%d) number of is = %d ", n,factorial);
return 0;
}