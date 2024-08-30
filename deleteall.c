struct node* deleteAll(struct node *head)
{
    int item;
    printf("Enter element to delete\n");
    scanf("%d", &item);
    struct node *temp =head;
    while(temp!= NULL)
    {
        if(item == head->data)
        {
            struct node *p = head;
            head = head->next;
            if(head == NULL)
            {
                tail = NULL;
                return head;
            }
            head->prev = NULL;
            free(p);
            temp = head;
            continue;
        }
        if(temp->data!=item)
        {
            temp = temp->next;
        }
        else{
        struct node *p = temp;
        temp->prev->next = temp->next;\
        if(temp->next == NULL)
        {
            temp->prev->next = NULL;
            tail = tail->prev;
            free(p);
            return head;
        }
        temp->next->prev = temp->prev;
        temp = temp->next;
        free(p);
    }}}