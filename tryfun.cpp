#include<iostream>
using namespace std;
void fun(int n,int m);

	int fun1()
	{ cout<<"0";
		return 1;
	}
		int fun2()
	{cout<<"1";
		return 0;
	}

int main()
{
	fun(fun1(),fun2());
}
