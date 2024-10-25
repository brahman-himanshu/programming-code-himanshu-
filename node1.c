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
int main() {
	struct Node * start = NULL;
	start = addAtBeg(start,5);
	start = addAtBeg(start,10);
	start = addAtBeg(start,20);
	start = addAtBeg(start,0);
    printf("value of first node%d",start->data);
	return 0;
}