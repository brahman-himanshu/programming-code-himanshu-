#include<stdio.h>
#include<stdlib.h>

struct Node {
	 int data;
	 struct Node *link;
};

struct Node* addAtBeg(struct Node *start, int data) {
	struct Node* temp = (struct Node *)malloc(sizeof(struct Node));
	temp->data = data;
	start = temp;
	temp->link = NULL;
	return start;
}

struct Node* addAtend(struct Node *start, int data) { 
	struct Node *tmp, *p;
	p = start;
	tmp = (struct Node *) malloc(sizeof(struct Node));
	tmp->data = data;
	
	while (p->link != NULL) {
		p = p->link;
	}
	
	p->link = tmp;
	tmp->link = NULL;
	
	return start;
}

// Function to count the number of nodes
int countNodes(struct Node *start) {
	int count = 0;
	struct Node *temp = start;
	while (temp != NULL) {
		count++;
		temp = temp->link;
	}
	return count;
}

// search element 
void searchelement(struct  Node *start){
	int search ;
	struct Node *tempPtr = start;
	printf(" enter the please search element : \n");
	scanf("%d",&search);
	while(tempPtr != NULL){
	if (search==tempPtr->data){
		printf(" element is found : \n ");
		break;
	}
	
	
	tempPtr = tempPtr->link;
	}
}

	
	
	
	
	
int main() {
	int n;
	struct Node *start = NULL, *tempPtr = NULL;
	
	printf("Enter the number of nodes\n");
	scanf("%d", &n);
	
	// Value insertion logic
	start = addAtBeg(start, 5);
	for (int i = 2; i <= n; i++) {
		start = addAtend(start, 5 * i);
	}
	
	int nodeCount = countNodes(start);
	printf("The number of nodes is: %d\n", nodeCount);
	
	// Value to be printed
	tempPtr = start;
	while (tempPtr != NULL) {
		printf("%d\t", tempPtr->data);
		tempPtr = tempPtr->link;
	}
	
	searchelement(start);
	
	return 0;
}