#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *link;
};

struct Node* addAtBeg(struct Node *start,int data) {
struct Node*temp=(struct Node *)malloc(sizeof(struct Node));
temp->data=data;
start=temp;
temp->link=NULL;
return start;
}
struct Node *addatend (struct Node *start ,int data ){
	Node start *p,*temp;
	p=start;
	temp->data =data ;
	temp=(struct Node *) malloc(sizeof(struct Node));
	
	while (p->line!=NULL)
		P=P->link;
	p->link=temp;
	temp->link=NULLL
	return start ;
}
int main() {
	int p , temp;
	int n ;
	struct Node * start = NULL;
	printf(" enter the n no of nodes : \n ");
	scanf("%d",&n);
	
	
	start = addAtBeg(start,n);
for (int  i=2;i<=n;i++){
	addAtend();
}
	//start = addAtBeg(start,10);
	//start = addAtBeg(start,20);
	//start = addAtBeg(start,0);
    printf("value of first node%d",start->data);
	return 0;
}