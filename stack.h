
#include <iostream>
using namespace std;
class Stack;
class Node{
        private:
                Node(char, Node*);
                char data;
                Node* next;
                friend class Stack;
                friend ostream& operator<<(ostream&, const Node&);
};

class Stack{
        public:
                Stack(int = 6);
                Stack(const Stack&);
                ~Stack();
                bool push(char);
                bool pop(char&);
                bool empty() const;
                bool full() const;
                bool clear();
                Stack& operator==(const Stack&);
                friend ostream& operator<<(ostream&, const Stack&);
        private:
                Node* head;
                int size;
                
};
