// Program -17
//WAP to find the sum of digits of the entered number.

#include<stdio.h> 
int  main()                   //Priyanka IMSEC
{ 
int a , priyanka,sumDigits = 0; 
printf("Enter number=");  
scanf("%d",& a ); 
while(a>0) 
{ 
priyanka = a %10; 
sumDigits=sumDigits+ priyanka; 
a = a/10;  
} 
printf("Sum of Digits= %d",sumDigits); 
return 0;
}



//[PRIYANKA GUPTA]\