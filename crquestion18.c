//Program -18
//WAP to find the reverse of a number.

#include<stdio.h> 
int  main()              //Priyanka IMSEC
{ 
int priyanka,r,rev=0; 
printf("Enter number=");  
scanf("%d",& priyanka); 
while(priyanka>0) 
{ 
r= priyanka%10; 
rev=rev*10+r; 
priyanka =priyanka/10;  
} 
printf("Reverse number=%d",rev); 
return 0;
}



//[PRIYANKA GUPTA]