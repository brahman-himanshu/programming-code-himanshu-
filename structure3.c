#include<Stdio.h>
 struct dateofbirth {
int   day;
int month;
int   year;
};
int main (){
	
	int i=0;
 struct dateofbirth dateofbirtharrays[10];
printf("print the date : \n ");
for  (int i  =0;i<1;i++){
scanf("%d %d %d",&dateofbirtharrays[i].day , &dateofbirtharrays[i].month,&dateofbirtharrays[i].year);
//printf ("dob = day %d / month %d / year %d  ", day , month, year  );
}
printf ("dob = day %d / month %d / year %d  ", dateofbirtharrays[i].day , dateofbirtharrays[i].month,dateofbirtharrays[i].year  );
}
