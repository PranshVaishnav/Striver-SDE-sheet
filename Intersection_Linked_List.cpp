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


long long int findIntersection(Node *firstHead, Node *secondHead)
{
    // Write your code here
    stack<Node *> first;
    stack<Node *> second;

    while (firstHead != NULL)
    {

        first.push(firstHead);
        firstHead = firstHead->next;
    }

    while (secondHead != NULL)
    {
        second.push(secondHead);
        secondHead = secondHead->next;
    }

    if (first.top() != second.top())
    {
        return -1;
    }
    Node *ans = NULL;
    Node *a = NULL;
    Node *b = NULL;
    while (!first.empty() and !second.empty())
    {
        if (first.top() == second.top())
        {
            ans = first.top();
            a = first.top();
            b = second.top();
            first.pop();
            second.pop();
        }
        else
        {
            break;
        }
    }

    return ans->data;
}