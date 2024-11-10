#include<stdio.h>
int main (){
	#line 8 " hello world "
	printf("%d",__LINE__);
	printf("\n%s",__DATE__);
	printf("\n%s",__FILE__);
printf("\n%s",__TIME__);
printf("%d",__STDC__);
//printf("of line  %s ",__line__);
return 0;
}