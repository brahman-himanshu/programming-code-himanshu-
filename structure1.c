#include<stdio.h>
struct structure{
	//struct structure{
		char name[20];
		int roolno ;
		double  phoneno ;
	     int dateofbirth ;
		 int age ;
		 char gender;
	};
	
	
	
	
	
	int main() {
	struct structure himanshu={"himanshu",22,7042292044,20060607,18,'M'};
      printf("himanshu : %s",himanshu.name);
}