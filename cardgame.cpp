#include <bits/stdc++.h>
using namespace std;

int main()
{int t1;
long count=0;
cin>>t1;

int a[t1];
for(int i=0;i<t1;i++)
{
    cin>>a[i];
}
int t2;
cin>>t2;

vector<int> b(t2);
for(int i=0;i<t2;i++)
cin>>b[i];
int max=*max_element(b.begin(),b.end());
for(int i=0;i<t1;i++)
{
    if((max-a[i])>=0)
    count=count+((max-a[i])+1);
}
cout<<count;
    return 0;
}

