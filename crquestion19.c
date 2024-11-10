//Program-19
//WAP to print Armstrong numbers from 1 to 100. 
#include<stdio.h>
int  main()    //priyanka IMSEC
{ 
int i=1,r,aNum=0,num; 
for(i=1;i<=100;i++) 
{ 
num=i; 
aNum=0; 
while(num>0) 
{ 
r=num%10; 
aNum=aNum+r*r*r; 
num=num/10;  
} 
if(i==aNum) 
{ 
printf("Armstrong Number= %d\n",i); 
}
}
return  0;qaaqaaaaaaaa
}

//[PRIYANKA GUPTA]