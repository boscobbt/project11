#include<iostream>
#include"queue.h"
using namespace std;
Queue::Queue(int)
{
	max=10;
	front = rear = 0;
	int *data[max];
	
}
Queue::Queue(const Queue&)
{

}
Queue::~Queue()
{

}
//Queue::Queue& operator=(const Queue&)

bool Queue::enqueue(int a)
{
	if(empty()==true)
	{
		return false;
	}
	else
	{
	rear++;
	data[rear % max] = a;
	}
}
bool Queue::dequeue(int&)
{
	int a;
	if(empty()==true)
	{
		return false;
	}
	else
	{
		front++;
		a=data[front % max];
		cout<<a;
		return true;
	}
}
bool Queue::empty() const
{
	return(front==rear);
}
bool Queue::full() const
{
	return((rear-max)==front);
}
bool Queue::clear()
{
	front=rear=0;
}
bool Queue::operator==(const Queue&) const
{

}
//friend ostream& operator<<(ostream&, const Queue&)

