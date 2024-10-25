#include<stdio.h>
int main (){
int  math , hindi , physics , chemistry , english ;
printf(" enter the no of  five subject ( math , hindi , physics , chemistry, english ) :\n  " );
scanf(" %d %d %d %d %d ", &math , &hindi , &physics,&chemistry, &english);
int sum = math + hindi+ physics+ chemistry+ english;
int percentage= sum/5;
printf(" percentage of 5 subject (%d) is = %d ",sum , percentage);
return 0;
