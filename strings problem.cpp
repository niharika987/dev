#include<iostream>
using namespace std;
void fun(string s,int n)
{
	if(n==3)
	cout<<s<<endl;
	else{
	cout<<s<<endl;
	fun(s+'a',n+1);
	fun(s+'b',n+1);
	fun(s+'c',n+1);

}

}
int main()
{
	string s;
	fun(s,0);
	return 0;
}
