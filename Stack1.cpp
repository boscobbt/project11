#include <iostream>
#include "stack.h"
using namespace std;
Node::Node(char a, Node* b)
{
        data = a;
        next = b;
}
ostream& Node::operator<<(ostream& cout, const Node& b)
{
        a<< b.data;
}
Stack::Stack(int a)
{
        head = new Node('\0', NULL);
        size = a;

}
Stack::Stack(const Stack& a)
{
    Node* temp = new Node(a, NULL);
    while(temp.data!= '\0')
    {
        push(temp.data)

    }
}
Stack::~Stack()
{       
    
        delete head;
        head=NULL;
    }
bool Stack::push(char a)
{
        Node* temp = new Node(a, NULL)
        temp->next = head;
        head=temp;
        return true;
}
bool Stack::pop(char& a)
{
        a = head->data;
        head = head->next;
}
bool Stack::empty() const
{
       if(head == NULL)
       {
                return true;
       }
}
bool Stack::full() const
{
        if(head != NULL)
        {
                return true;
        }
}
bool Stack::clear()
{
         head = NULL;
         return true;
}
Stack& Stack::operator==(const Stack& a )
{

}
ostream& Stack::operator<<(ostream& a, const Stack& b)
{

}
int main()
{
    S
}