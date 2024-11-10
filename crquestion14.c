//Program-14
//WAP to print sum of even and odd numbers from 1 to N numbers.

#include<stdio.h>
int  main()                         //Priyanka IMSEC
{ 
int i,priyanka,sumEven=0,sumOdd=0; 
printf("Enter number =");  
scanf("%d",&priyanka); 
for ( i=1 ; i<=priyanka ;i++ ) 
{ 
if(i%2==0) 
{ 
sumEven=sumEven+i; 
} 
else 
{ 
sumOdd=sumOdd+i; 
} 
} 
printf("\nSum of even numbers= %d",sumEven);  
printf("\nSum of odd numbers= %d",sumOdd); 
return 0;
}  


//[PRIYANKA GUPTA]