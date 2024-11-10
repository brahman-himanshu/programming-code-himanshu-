//Program - 15
//WAP to print the Fibonacci series. 

#include<stdio.h>
int   main()                             //Priyanka IMSEC
{ 
 int i,n, X1=0, X2=1, PRIYANKA; 
 printf("Enter number=");  
 scanf("%d",&n); 
 for(i=1;i<=n;i++) 
 { 
  printf("%d\n",X1); 
  PRIYANKA = X1 + X2; 
  X1 = X2; 
  X2 = PRIYANKA;  
 }   
 return 0;
} 
 
//[PRIYANKA GUPTA]