#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
while(n--)
{ int count=0;
int m,k;
cin>>m>>k;

vector<int> a(100005);
int j=0;
for(int i=1;i<=k;i++)
{
a[j]=m%i;
//cout<<m<<k<<endl<<m%i<<a[i];
j++;
}



int min=*max_element(a.begin(),a.end());
cout<<min<<endl;

}
return 0;
}
