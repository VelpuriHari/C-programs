#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node{
int val;
struct Node *next;
};

struct Node *Head=NULL;

struct Node * createNode(){
struct Node *new=malloc(sizeof(struct Node));
printf("Enter the Val into New Node");
scanf("%d",&new->val);
new->next=NULL;
return new;
}

void insertNode(){
if(Head==NULL){
Head=createNode();
return;
}
struct Node *temp=Head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=createNode();
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
printf("\n1.Insert Node\n2.Display\n3.Exit");
scanf("%d",&n);
if(n==1)
insertNode();
else if(n==2)
display();
else if(n==3)
return 0;
}
}
