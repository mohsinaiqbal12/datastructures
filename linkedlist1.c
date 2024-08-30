# include <stdio.h>
# include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *tail = NULL;
struct node* create_ll()
{
    
    int n;
    printf("Enter the size of the linked list\n");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(int i = 0; i < n; i++)
    {
        struct node *temp= (struct node*)malloc(sizeof(struct node));
        scanf("%d", &temp->data);
        if(head==NULL)
        {
            head = tail = temp;
            
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        temp->next = NULL;
    }
    return head;
}
void view_ll(struct node *head)
{
    struct node*p = head;
    if(head == NULL) return;
    while(p!=NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
    printf("\n");
}

struct node* deleteIndex(struct node *head, int index)
{
    if(head == NULL)return head;
    if(index == 1)
    {
        struct node *temp = head;
        head =head->next;
        free(temp);
        return head;
    }
    struct node *temp = head;
    struct node *prev = NULL;
    int c = 0;
    while(temp!=NULL)
    {
        c++;
        if(c == index)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        } 
        prev = temp;
        temp = temp->next;
    }
    return head;
}
struct node* deleteElement(struct node *head, int element)
{
    if(head == NULL)return head;
    if(element == head->data)
    {
        struct node *temp = head;
        head =head->next;
        free(temp);
        return head;

    }
    struct node *temp = head;
    struct node *prev = NULL;
    
    while(temp!=NULL)
    {
        
        if(temp->data == element)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        } 
        prev = temp;
        temp = temp->next;
    }
    return head;
}
int main()
{
    head = create_ll();
    view_ll(head);
    head = deleteElement(head, 50);
    view_ll(head);
}