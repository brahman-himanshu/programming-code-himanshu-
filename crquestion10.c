//Program-10
//WAP that accepts marks of five subjects and finds percentage and prints 
//grades according to the following criteria: 
//Between 90-100%-----Print ‘A’ 
//80-90%-----------------Print ‘B’ 
//60-80%-----------------Print ‘C’ 
//Below 60%-------------Print ‘D’

 #include<stdio.h> 
int main()                                      //Priyanka IMSEC
{ 
 int hindi, english, science,math,priyanka,sum ; 
 float per; 
 printf("Enter marks of Hindi="); 
 scanf("%d",&hindi); 
 printf("Enter marks of English="); 
 scanf("%d",&english); 
 printf("Enter marks of Science="); 
 scanf("%d",&science); 
 printf("Enter marks of Math="); 
 scanf("%d",&math); 
 printf("Enter marks of priyanka="); 
 scanf("%d",&priyanka); 
  
 sum=hindi + english + science + math + priyanka; 
 printf("\nSum of marks=%d",sum); 
  
 per=(float)sum/5; 
 printf("\nPercentage of marks=%f",per); 
  
 if(per>=90&&per<=100) 
 { 
  printf("\nGrade A"); 
 } 
 else if(per>=80&&per<90) 
 { 
  printf("\nGrade B"); 
 } 
 else if(per>=60&&per<80) 
 { 
  printf("\nGrade C"); 
 } 
 else if(per<60) 
 { 
  printf("\nGrade D");
 }
return 0;
}


//[PRIYANKA GUPTA]