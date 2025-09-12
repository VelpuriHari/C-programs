#include"headerfile.h"

void deleteAtPosition(struct Node * Head,int Pos)
{
	if(Head==NULL)
	{
		printf("Not Found");
		return;
	}
	if(Head->val==Pos)
	{
		struct Node * temp=Head;
		Head=Head->next;
		free(temp);
		return Head;
	}

	Head->next=deleteAtPosition(Head->next,Pos);
	return Head;
}


