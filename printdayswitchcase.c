#include<stdio.h>
int main (){
int days ;
printf("enter the values (1-7) : \n ");
scanf("%d",&days);
switch (days){
	case  1:
	printf("sundays ");
	break ;
	case  2 :
    printf("mondays ");
	break;
	case 3 :
	printf("tuesdays ");
	break ;
	case 4 :
	printf("wednesdays ");
	break;
	case 5 :
	printf("thursdays ");
	break ;
	case 6:
	printf("fridays ");
	break ;
	case 7 :
	printf("saturdays ");
   break ;
   default :
   printf("please enter a valid numbers : \n ");
   break ;
}
return 0;
}