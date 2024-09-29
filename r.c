 #include<stdio.h>
 int main (){
	 //aasa program banana  hai ki jo value row me jae wo column me bhi jae 
	 int n,i ;
	 printf("enter a value of row and column ");
	 scanf("%d",&n);
	 for (int i = 1 ; i<=n;i++){ 
	 //this line for row 
		 for ( int j = 1 ; j<=i;j++ ) {
			 // this line for column 
		 printf("%d",i);
		 }
		 printf("\n");// this line print in next  line 
	 }
			 printf("\nrow = column");
			 
			 
	 return 0 ;
 }