//Program to find the min and max element of a linked list
# include <iostream>
# include <cmath>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head= NULL, *tail = NULL;
void create_ll(struct node *temp)
{
    int n;
    cout<<"Enter number of elements"<<endl;
    cin>> n;
    cout<<"Enter data"<<endl;
    for(int i = 0; i < n; i++)
    {
        temp = new node;
        cin>>temp->data;

        if(head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        temp->next = NULL;
    }
    
}
void view_ll(struct node *temp)
{
    node* p = head;
    while(p!=NULL)
    {
        cout<<p->data<<"    ";
        p = p->next;
    }
}
int maxElement(struct node *temp)
{
    node *p = head;
    int max = p->data;
    while(p!=NULL)
    {
        if(p->data > max)
            max = p->data;
        p = p->next;    
    }
    return max;

}
int minElement(struct node *temp)
{
    node *p = head;
    int min = p->data;
    while(p!=NULL)
    {
        if(p->data < min)
            min = p->data;
        p = p->next;    
    }
    return min;

}
int sumofElements(node *temp)
{
    node *p = head;
    int sum = 0;
    while(p!=NULL)
    {
        sum = sum +p->data;
        p = p->next;
    }
    return sum;
}
double avgofElements(node *temp)
{
    int size = 0;
    node *p = head;
    double sum = 0.0;
    while(p!=NULL)
    {
        sum+=p->data;
        size++;
        p = p->next;
    }
    double avg = sum/size;
    return avg;
    
}
void varandSd(struct node *temp)
{
    int sum = 0, size = 0;
    node *p = head;
    double mean = avgofElements(temp);
    double variance = 0.0;
    while(p!=NULL)
    {
        variance = variance + pow((p->data - mean),2);
        size++;
        p = p->next;
    }
    variance = variance/size;
    cout<<"Variance  =   "<<variance <<endl;
    cout<<"Standard Deviation =   "<<sqrt(variance);
}
int main()
{
    struct node *temp;
    create_ll(temp);
    view_ll(temp);
    cout<<endl;
    cout<<"Max element of linked list is: "<<maxElement(temp)<<endl;
    cout<<"Min element of linked list is: "<<minElement(temp)<<endl;
    cout<<"Sum of elements of linked list is: "<<sumofElements(temp)<<endl;
    cout<<"Average of elements of linked list is: "<<avgofElements(temp)<<endl;
    varandSd(temp);
}