#include<stdio.h>
#include<math.h>
int sumofevendigits(int number ){
	if (number==0){
		return 0 ;
	}
	int lastdigits=number%10;
      if(lastdigits%2==0){
        return lastdigits+sumofevendigits(number/10); 
	}
	else {
		return sumofevendigits(number/10);
	}
}
	int main(){
		int number;
		printf("enter a no ");
		scanf("%d",&number);
		int result = sumofevendigits(number);
		printf("sum of even digits :%d\n",result);
		return 0 ;
	}