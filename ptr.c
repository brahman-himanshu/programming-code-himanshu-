#include<Stdio.h>
#include<stdlib.h>
struct node{
	int data ;
	struct node *link ;
};
int main (){
   struct node *head = (node*) malloc (sizeof(struct node));
   if (head==NULL ){
	   printf(" node  is  null : \n ");
   }
   head ->data=5;
   head ->link = NULL ;
  printf("%d",(head -> data);
}
	   