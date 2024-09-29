#include<stdio.h>
int main (){
int a[5];
int i ;
int sum = 0  ;
printf("\nhello world ");
printf(" oooo la la la la ");

for(int i=0; i<5;i++) {
	scanf(" %d",&a[i]);
}
for(int i=0 ; i <5; i++ )
{
	sum = sum + a[i];
}
printf("sum of 5 digits no : \n%d",sum  );
printf("\nthanks to you for sum of these 5  digits ");
return 0;
}