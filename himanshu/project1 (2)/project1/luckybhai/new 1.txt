#include<stdio.h>
int main (){
int n ,sum=0
printf(" please enter the value of n : ");
scanf("%d",&n);
for (int i = 0 ;i<n;i++){
sum = sum + i ;
}
printf("sum of nth term is = %d",sum );
return 0 ;
} 