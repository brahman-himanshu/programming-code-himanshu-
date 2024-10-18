#include<Stdio.h>
struct student{
	char name [20];
	int age ;
	int  rollno ;
	int  chemistry;
	int physics;
	int math ;
	int hindi;
	
	int english;
};
int  main (){
int i;
	struct student studentarrray [10];
	printf("enter the student name , age , roll no and  enter 5 subject marks : \n ");
	for (int  i=0;i<1;i++){
		scanf("%s %d %d %d %d %d %d %d %d ",studentarrray[i].name , &studentarrray[i].age ,&studentarrray[i].rollno,&studentarrray[i].chemistry ,  &studentarrray[i].physics , &studentarrray[i].math , &studentarrray[i].hindi,&studentarrray[i].english  );
	printf(" the data  is here by your name = %s \n  your age = %d \n  rool no = %d  \n  chemistry =%d \n  physics= %d \n math  = %d  \n hindi = %d \n english = %d ", studentarrray[i].name , studentarrray[i].age , studentarrray[i].rollno,studentarrray[i].chemistry,studentarrray[i].physics,studentarrray[i].math , studentarrray[i].hindi,studentarrray[i].hindi , studentarrray[i].english);
	}
	//printf(" %s ",studentarrray[i].name);
	//printf("%d ",studentarrray[i].age );
	return 0;
};