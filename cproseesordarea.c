#include<stdio.h>
#define PI 3.14
#define AREA(r) (PI * r * r) 
int main (){
	int r=8;
	int  result = AREA(r);
    printf("result = %d ", result);
	return 0;
}