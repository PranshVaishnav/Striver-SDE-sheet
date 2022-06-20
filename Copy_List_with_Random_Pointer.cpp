#include <bits/stdc++.h> 
using namespace std;


    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };


LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Write your code here.
    //Making normal List with just nex pointer
    if(head==NULL)
        return NULL;
    LinkedListNode<int>*root=new LinkedListNode<int>(head->data);
    LinkedListNode<int>*ans=root;
    LinkedListNode<int>*dummy_head=head;
    unordered_map<LinkedListNode<int>*,LinkedListNode<int>*> mp;
    mp[head]=root; 
    head=head->next;
        
    while(head!=NULL)
    { 
        root->next=new LinkedListNode<int>(head->data);
        mp[head]=root->next;
        root=root->next;
        head=head->next;
    }
    root->next=NULL;
    //Root back at initial Position
    root=ans;
    //Head back at initial position
    head=dummy_head;
     while(head!=NULL)
    { 
        root->random=mp[head->random];
        root=root->next;
        head=head->next;
    }
     
    
    return ans;
}
