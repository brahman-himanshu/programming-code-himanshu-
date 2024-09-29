#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
// initiaize random no generator 
srand(time(0));
// generate random no between 1 and 100 
int randomnumber = (rand()%100) + 1;
int no_of_guesses = 0 ;
int guessed_number ;
// print the random no 
// print("random no : %d\n", random no );
do 
{
printf(" \nguess the number ");
scanf("%d",&guessed_number);
	if (guessed_number>randomnumber)
	{
	printf("\nlower no please ");
}
else if (" guessed_number< randomnumber")
{
	printf("higher no please!\n");
}
else
{
	printf("congrats! \n");
}
no_of_guesses++;
}
while (guessed_number != randomnumber);
printf("you guessed the no in %d guesses",no_of_guesses);
	return 0 ; 
} 