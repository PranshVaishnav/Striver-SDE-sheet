#include <bits/stdc++.h> 
using namespace std;


    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };


LinkedListNode<int> * findMid(LinkedListNode<int> *head)
{
    LinkedListNode<int> *p=head;
    LinkedListNode<int> *q=head;
    while(q)
    {
        if(q->next!=NULL && q->next->next!=NULL)
        q=q->next->next;
        else break;
        p=p->next;   
    }
    return p;
}

LinkedListNode<int>* reverse(LinkedListNode<int>*head)
{
    LinkedListNode<int>* prev=NULL;
    LinkedListNode<int>* curr=head;
    LinkedListNode<int>* nxt=head->next;
    
    while(curr!=NULL)
    {
       nxt=curr->next;
       curr->next=prev;
       prev=curr;
       curr=nxt; 
    }
    return prev;
       
}

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head==NULL or head->next==NULL)
        return true;
    LinkedListNode<int> *mid=findMid(head);
    //reverse Linked list after mid node..
    LinkedListNode<int> *afterMid=reverse(mid->next);
    mid->next=afterMid;
    
    int flag=0;
    while(afterMid!=NULL)
    {
        if(head->data!=afterMid->data)
        {
            flag=1;
            break;
        }
        head=head->next;
        afterMid=afterMid->next;
    }
    if(flag)return false;
    return true;
    

}