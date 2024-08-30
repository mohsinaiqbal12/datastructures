# include <stdio.h>
# include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head = NULL, *tail = NULL;
struct node* create_cll(int arr[], int size)
{
	head = (struct node *)malloc(sizeof(struct node));
	head->data= arr[0];
	head->next= NULL;
	tail = head;
	int i;
	for( i = 1 ; i < size; i++)
	{
		struct node *temp = (struct node *)malloc(sizeof(struct node));
		temp->data = arr[i];
		temp->next = NULL;
		tail->next= temp;
		tail = temp;
	}
	tail->next = head;
	return head;
}
struct node* insert_cll(struct node *head)
{
	int key, position;
	printf("Enter element that you want to insert\n");
	scanf("%d", &key);
	printf("Enter position before which you want to insert the key, enter -1 for insertion at end\n");
	scanf("%d", &position);
	struct node *p = head;
	if(position == 0)
	{
		struct node *temp = (struct node *)malloc(sizeof(struct node));
		temp->data = key;
		temp->next = head;
		head = temp;
		tail->next = head;
		return head;
	}

	if(position == -1)
	{
		struct node *temp = (struct node *)malloc(sizeof(struct node));
		temp->data = key;
		temp->next = head;
		tail->next = temp;
		tail = temp;
		return head;
	}

	for(int i = 1; i < position; i++)
	{
		p = p->next;
	}
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->data = key;
	temp->next = p->next;
	p->next = temp;
	return head;

}
void display_ll(struct node *head)
{
	struct node *p = head;
	while(p->next != head)
	{
		printf("%d\t",p->data);
		p = p->next;
	}
	printf("%d\t",p->data);
	printf("\n");
	printf("\n");
}

struct node* delete_ele(struct node *head)
{
	int element;
	printf("Enter the element you wish to delete\n");
	scanf("%d", &element);
	struct node *p = head;
	struct node *trav = NULL;
	while(p->data != element)
	{
		trav = p;
		p = p->next;
	}
	if(p == head)
	{
		head = head->next;
		free(p);
		tail->next = head;
		return head;
	}
	if(p == tail)
	{
		tail = trav;
		tail->next = head;
		free(p);
		return head;
	}
	trav->next = p->next;
	free(p);
	return head;


}
int main()
{
	int arr[5] = {2,4,6,8,10};
	head = create_cll(arr,5);
	display_ll(head);
	head = delete_ele(head);
	display_ll(head);
}