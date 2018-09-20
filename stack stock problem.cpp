#include<iostream>
using namespace std;
int top=-1;
struct stack{

	
	
	public:
		int a1[1000];
		void push(int x)
		{
			a1[++top]=x;
		}
		void pop()
		{ int x=a1[top];
			top=top-1;
	//	return x;
		}
};

int main()
{
	struct stack s;
	int a[7]={100,80,60,70,60,75,85};
	int b[7]={0};
	int j;
	b[0]=1;
	s.push(0);
	for(int i=1;i<7;i++)
	{
	 
	if(a[s.a1[top]]>a[i])
	{
	
	//b[i]=i-s.a1[top];
		s.push(i);}
	else
	{
		while(a[s.a1[top]]<=a[i])
		{
			if(top==-1)
			break;
		s.pop();
		}	
		b[i]=i-s.a1[top];
	s.push(i);
	
	}
	
	
	}
	
	for(int i=0;i<7;i++)
	cout<<b[i]<<" ";                                                                       
	
	return 0;
}
