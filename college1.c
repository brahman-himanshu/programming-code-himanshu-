#include<stdio.h>
int main (){
	char myname[100];
	char fatherName[100];
	char motherName[100];
	int members;
	int age ;
	printf(" there are how many members in your family = ");
	scanf("%d",&members);
	printf("enter the your  name = ");
	gets(myname);
	printf(" \n enter the your age = ");
	scanf("%d",&age);
	printf("enter the your father,s name = ");
	gets(fatherName);
	printf("enter the your mother name = ");
	gets(motherName);
	printf(" %d members in your family ",members); 
	printf(" your age is = %d\n");
	printf("\nyour name is = %s",myname);
	printf("\nyour mother name is = %s",motherName);
	printf("\nyour father name is = %s ",fatherName);
     printf("\ncode is done  by himanshu :");
	return 0;
}