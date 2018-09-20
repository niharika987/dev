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
	int a[8]={5,1,7,11,6,9,13,2};

s.push(a[0]);
for(int i=1;i<8;i++)
{
	
	
//	if(s.a1[top]<a[i] )
//	{
		while(s.a1[top]<a[i])
		{ 	cout<<s.a1[top]<<" "<<a[i]<<endl;
		 if(top==-1)
			break;
			s.pop();
		
		

		}
		
		
			if(s.a1[top]>a[i] )
		{
		
		s.push(a[i]);	
		}
		
		s.push(a[i]);
		}
		
//}
	
//rest elements in the stack will be marked -1...
		
	return 0;
}
