//Program-12
//WAP to print the sum of all numbers up to a given number.
#include <stdio.h> 
int main()           //Priyanka IMSEC
{ 
int priyanka, i, sum = 0; 
printf("Enter a positive integer: "); 
scanf("%d", &priyanka); 
i = 1; 
while (i <= priyanka) { 
sum += i; 
++i; 
} 
printf("Sum = %d", sum);  
return 0;
} 


//[PRIYANKA GUPTA]