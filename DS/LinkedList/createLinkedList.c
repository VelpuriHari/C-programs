
#include"headerfile.h"

struct Node *Head=NULL;
extern struct Node * reversDisplay(struct Node * Head);
extern struct Node * reverse();
extern void insertNodeAtBegin();
extern struct Node * insertAtLast(struct Node * Head);

struct None * createNode(){
struct Node *new=malloc(sizeof(struct Node));
printf("Enter the Val into New Node");
scanf("%d",&new->val);
new->next=NULL;
return new;
}


void display(){
if(Head==NULL)
{
printf("List is Null");
return ;
}
struct Node *temp=Head;
while(temp!=NULL)
{
printf("%d->",temp->val);
temp=temp->next;
}
}

int main(){

int n;
while(true){
printf("\n1.Insert Node At Begin\n2.Display\n3.Revers\n4.Exit\n5.DisplayReverse\n6.InsertAtLast\n");
scanf("%d",&n);
if(n==1)
insertNodeAtBegin();
else if(n==2)
display();
else if(n==4)
return 0;
else if(n==5)
	reversDisplay(Head);
else if(n==3)
{
	Head=reverse(Head);
	display();
}
else if(n==6)
{
	struct Node * Last=insertAtLast(Head);
	Last->next=createNode();
}

}
}
