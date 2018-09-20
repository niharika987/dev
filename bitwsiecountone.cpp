#include<iostream>
using namespace std;
int n;
int main()
{ 
    while(cin>>n)
{ int count=0;
while(n)
{
    n=n&(n-1);
    count++;
}
    cout<<count<<endl;
}
    
    return 0;
}
