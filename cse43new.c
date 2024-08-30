#include <stdio.h>
# include <stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
struct node *head = NULL, *tail = NULL;
struct node* create_ll(int arr[], int size)
{
	head = (struct node*)malloc(sizeof(struct node));
	head->data= arr[0];
	head->prev = NULL;
	head->next= NULL;
	tail = head;
	int i = 1;
	for( i = 1; i < 5; i++)
	{
		struct node *temp = (struct node*)malloc(sizeof(struct node));
		temp->data= arr[i];
		temp->prev = tail;
		temp->next = NULL;
		tail->next = temp;
		tail = temp;
	}
	return head;
	
}
void display_ll(struct node *head)
{
	struct node *p = head;
	while(p!=NULL)
	{
		printf("%d\t",p->data);
		p = p->next;
	}
	printf("\n");
}
struct node* reverse_ll(struct node *head)
{
	if(head == NULL || head->next == NULL)return head;
	struct node *temp = head;
	while(temp!=NULL)
	{
		if(temp == head)
		{
			tail = head;
		}
		if(temp->next == NULL)
		{
			head = temp;
		}
		struct node *p = temp->next;
		temp->next = temp->prev;
		temp->prev = p;
		
		temp = temp->prev;
	}
	return head;
}
int lengthof_ll(struct node *head)
{
	int count =0;
	struct node *temp = head;
	while(temp!=NULL)
	{
		count++;
		temp = temp->next;
	}
	return count;
}
void swap(int *a , int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void select_sort(int a[], int count)
{
	int i,j;
	for(i = 0; i < count-1; i++)
	{
		int min = a[i];
		int index = i;
		for(j = i+1; j < count; j++)
		{
			if(a[j]< min)
			{
				min = a[j];
				index = j;
			}
			
		}
		swap(&a[i], &a[index]);
	}
}
struct node* sort_ll(struct node *head)
{
	struct node *temp = head;
	
	int count = lengthof_ll(head);
	int a[100];
	int i;
	for( i = 0; i < count; i++)
	{
		a[i] = temp->data;
		temp = temp->next;
	}
	select_sort(a, count);
	temp = head;
	for( i = 0; i < count; i++)
	{
		temp->data = a[i];
		temp = temp->next;
	}
	return head;
	
}
int main()
{
	int arr[5] = {1,2,3,4,5};
	head = create_ll(arr,5);
	display_ll(head);
	head = reverse_ll(head);
	display_ll(head);
	struct node *sorted = sort_ll(head);
	display_ll(sorted);
}
