
#include"headerfile.h"


struct Node * reverse(struct Node * head)
{
	if(head==NULL || head->next==NULL)
	{
		return head;
	}
	struct Node * newHead=reverse(head->next);
	head->next->next=head;
	head->next=NULL;
	return newHead;
}
		
