#include <bits/stdc++.h> 
using namespace std;

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };


Node *findMiddle(Node *head) {
    // Write your code here
    Node *dummy=head;
    head=head->next;
    int cnt=0;
    while(head!=NULL)
    {
        dummy=dummy->next;
        head=head->next;
        
        if(head!=NULL)
        {
            head=head->next;
        }
    }
     return dummy;
}