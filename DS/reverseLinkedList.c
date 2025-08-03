#include<stdio.h>
#include<stdlib.h>

struct Node{
	int val;
	struct Node *next;
};

struct Node *Head=NULL;

struct Node * newNode(){
	struct Node *new=malloc(sizeof(struct Node));
	printf("Entre the value");
	scanf("%d",&new->val);
	new->next=NULL;
	return new;
}

void insert(){
	if(Head==NULL){
		Head=newNode();
		return;
	}
	struct Node *temp=Head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newNode();
}


void display(){
	struct Node *temp=Head;
	while(temp!=NULL)
	{
		printf("%d->",temp->val);
		temp=temp->next;
	}
//	printf("%d->",temp->val);
	printf("NULL\n");
//	temp=Head;
	
}

void reverse(){
    struct Node *prev = NULL;
    struct Node *curr = Head;
    struct Node *Next=NULL;	

    while (curr != NULL) {

	Next=curr->next;
        curr->next = prev;
        prev = curr;
        curr =Next;
    }

    Head = prev;

    printf("\nReversed List: ");
    display();
}
/*
void reverse(){
	struct Node *prev=Head;
	struct Node *temp=Head->next;
	struct Node *Next=Head->next->next;
	while(temp->next!=NULL)
	{
		temp->next=prev;
		prev=temp;
		temp=Next;
		Next=Next->next;
	}
	temp->next=prev;
	Head->next=NULL;
	Head=temp;
	display();
}
*/

//void isloop(){
void deleteAtMiddle(){
	struct Node *slow=Head;
	struct Node *fast=Head;
	struct Node *prev=NULL;
	while(fast!=NULL && fast->next!=NULL)
	{
		/*
		if(slow==fast){
			printf("Loop Exists in Linked list");
			return;
		}
		*/
		prev=slow;
		slow=slow->next;
		fast=fast->next->next;
	}
	//printf("No Loop");
	prev->next=slow->next;
	display();
}




int main(){
/*
	while(1){
		char c;
		printf("Insert y/n\n");
	//	if((fgets(c,1,stdin))=='n')
		scanf("%c",&c);
		if(c=='n')
				{
			break;
		}
		insert();
	}
*/
	insert();
	insert();
	insert();
	insert();
	insert();
	insert();
	insert();
	insert();
//	insert();
	

display();
//reverse();
//isloop();

 deleteAtMiddle();
}
