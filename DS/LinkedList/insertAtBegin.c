#include"headerfile.h"

extern struct Node * Head;
extern struct Node * createNode();

void insertNodeAtBegin()
{
	struct Node * new=createNode();
	new->next=Head;
	Head=new;
}
