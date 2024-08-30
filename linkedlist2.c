# include <iostream>
# include <vector>
using namespace std;

class node
{
public:
    int data;
    node *next; 

    node(int d= 0, node*p = nullptr)
    {
        data = d;
        next = p;
    }   
};
node* create1(vector<int>a)
{
    int n;
    cout<<"Enter size of linked list"<<endl;
    cin>>n;
    if(n == 0)return nullptr;
    a.resize(n);
    cout<<"Enter elements"<<endl;
    for(int j= 0; j < n; j++)
    {
        cin>>a[j];
    }
    node*head= new node(a[0]);
    node *mover = head;
    int i;
    for(i = 1; i < a.size(); i++)
    {
        node *temp = new node(a[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

void view(node *a)
{
    node*p = a;
    
    while(p!=nullptr)
    {
        cout<<p->data<<"    ";
        p = p->next;
    }
    cout<<endl;
}

node* deleteIndex(node*a, int k)
{
    if(a == nullptr)return a;
    if(k==1)
    {
        node *temp = a;
        a = a->next;
        free(temp);
        return a;
    }
    node *temp = a;
    node *prev = nullptr;
    int c = 0;
    while(temp!=nullptr)
    {
        c++;
        if(c == k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return a;
}

node* deleteValue(node*a, int ele)
{
    if(a == nullptr)return a;
    if(ele == a->data)
    {
        node *temp = a;
        a = a->next;
        free(temp);
        return a;
    }
    node *temp = a;
    node *prev = nullptr;
    
    while(temp!=nullptr)
    {
        
        if(temp->data == ele)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return a;
}

node *deleteAll(node *a, int ele)
{

}

node* insertHead(node *a, int val)
{
    node *temp = new node(val, a);
    return temp;
}

node* insertLast(node *a, int val)
{
    if(a == nullptr)
    {
        node *temp = new node(val);
        return temp;
    }
    node *p = a;
    while(p->next!=nullptr)
    {
        p = p->next;
    }
    node *temp = new node(val);
    p->next = temp;
    return a;
}

node* insertIndex(node *a, int index, int val)
{
    if(a == nullptr)
    {
        if(index == 1)
        {
        node *temp = new node(val);
        return temp;
        }
        else
            return a;
    }
    if(index == 1)
    {
        node *temp = new node(val, a);
        return temp;
    }
    int c = 0;
    node *p = a;
    
    while(p!=nullptr)
    {
        c++;
        if(c == (index - 1))
        {
            node *temp = new node(val, p->next);
            p->next = temp;
            break;
        }
        
        p = p->next;
    }
    return a;
}

node* insertbeforeElement(node *a, int val, int ele)
{
    if(a == nullptr)
    {
        node *temp = new node(val);
        return temp;
    }
    if(ele == a->data)
    {
        node *temp = new node(val, a);
        return temp;
    }
    
    node *p = a;
    
    while(p!=nullptr)
    {
        
        if(p->next->data == ele)
        {
            node *temp = new node(val, p->next);
            p->next = temp;
            break;
        }
        
        p = p->next;
    }
    return a;
}




int main()
{
    vector<int>a;
    node *a1 = create1(a);
    view(a1);
    a1 = insertbeforeElement(a1,55,5);
    view(a1);
}