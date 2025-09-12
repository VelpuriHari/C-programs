
#include"headerfile.h"

struct Node * reversDisplay(struct Node * Head)
{

	if(Head==NULL)
		return;
	reversDisplay(Head->next);
	printf("%d->",Head->val);
	return NULL;
}

