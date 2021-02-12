#include <bits/stdc++.h> 
using namespace std;  
class Node  
{  
    public: 
    int data;  
    Node *next;  
};  
void append(Node** head_ref, int new_data)  
{  
    Node* new_node = new Node(); 
    Node *last = *head_ref;
    new_node->data = new_data;  
    new_node->next = NULL;  
    if (*head_ref == NULL)  
    {  
        *head_ref = new_node;  
        return;  
    }  
    while (last->next != NULL)  
        last = last->next;  
    last->next = new_node;  
    return;  
}    
void printList(Node *node)  
{  
    while (node != NULL)  
    {  
        cout<<node->data<<" ";  
        node = node->next;  
    }  
}  


Node* reverseList(Node* head) {
    if(head==NULL)
    {
        return head;
    }
    Node *prev=NULL,*curr=head,*next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

int main()  
{  
    int n;
    cin>>n;
    Node *head=NULL;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        append(&head,k);
    }
    Node *ans=reverseList(head);
    printList(ans);  
    return 0;  
}  
