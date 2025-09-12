#include"headerfile.h"


struct Node * insertAtLast(struct Node * Head)
{
	if(Head==NULL || Head->next==NULL)
	{
		return Head;
		
	}
	struct Node * Last=insertAtLast(Head->next);
	return Last;
}	

