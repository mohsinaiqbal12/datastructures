//program to concatenate two linked lists
# include <stdio.h>
# include <stdlib.h>

struct node 
{
	int data;
	struct node *next;
};
struct node *head1 = NULL, *tail1 = NULL, *head2 = NULL, *tail2 = NULL;
void create_ll(struct node *a, struct node *head, struct node *tail)
{
	int n;
	printf("Enter size of linked list\n");
	scanf("%d",&n);
	printf("Enter data\n");
	int i = 0;
	for(i = 0; i < n; i++)
	{
		struct node *temp = (struct node*)malloc(sizeof(struct node));
		scanf("%d",temp->data);
		
	
	if(head = NULL)
	{
		head = tail = temp;
		
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
	temp = temp->next;
	}
	a = head;
}
void display_ll(struct node *a, struct node *head, struct node *tail)
{
	struct node *p = head;
	while(p!=NULL)
	{
		printf("%d\t",p->data);
		p = p->next;
	}
	printf("\n");
}

int main()
{
	struct node *l1,*l2;
	create_ll(l1,head1,tail1);
	create_ll(l2, head2, tail2);
	display_ll(l1,head1,tail1);display(l2,head2,tail2);
}