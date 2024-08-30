//program to create and view linked list by storing employee info
# include <stdio.h>
# include <stdlib.h>

struct node 
{
    char name[50];
    int age;
    char address[50];
    int empId;
    struct node *next;
};
struct node *head = NULL, *tail = NULL;

void create_ll(struct node *temp)
{
    
    int n;
    printf("Enter number of employees whose info is to be stored\n");
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        temp = (struct node*)malloc(sizeof(struct node));
        printf("Enter employee name\n");
        scanf("%s",temp->name);
        printf("Enter age\n");
        scanf("%d",&temp->age);
        printf("Enter address\n");
        scanf("%s", temp->address);
        printf("Enter employee id\n");
        scanf("%d",&temp->empId);

        if(head == NULL)
        {
            head  = temp;
            tail  = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        temp->next = NULL;
    }
}

void view_ll(struct node *a)
{
    struct node *p = head;
    while(p!=NULL)
    {
        printf("Employee details are:\n");
        printf("Name: %s\n",p->name);
        printf("Age: %d\n", p->age);
        printf("Address: %s\n",p->address);
        printf("Employee ID: %d\n",p->empId);
        p=p->next;
    }
}
int main()
{
    struct node *temp;
    create_ll(temp);
    view_ll(temp);
}