#include<iostream>
using namespace std;
int front=0;
int rear=0;
string queue[1000];
void enqueue(string x)
{
	if(rear==1000)
	{
	cout<<"overflow";
	return;}
	
	if(front==0 && rear==0)
	{
	front++;
	
	}
	rear++; 
	queue[rear]=x;
//	queue[++rear]=x;
}

string pop()
{
	if(front==0 || front>rear)
{
return "underflow";

}
else{

string x=queue[front];
front++;	
	return x;
}

}

int main()
{
	string s="";
	enqueue(s);
//	cout<<rear<<front;
		
		
	while(front<=rear)
	{ 	string y=pop();
		cout<<y<<endl;
	 if(y.length()<3)
	{
		enqueue(y+'a');
		enqueue(y+'b');
		enqueue(y+'c');
	}

	}
	
	return 0;
}
