#include <bits/stdc++.h>
using namespace std;

int main()
{ int s;
cin>>s;
vector<int> a(5);
for(int i=0;i<5;i++)
{
    cin>>a[i];
}
int b[s][6];

for(int i=0;i<s;i++)
{
    for(int j=0;j<6;j++)
    {
        cin>>b[i][j];
    }
    
} vector<int> c(s); 
for(int i=0;i<s;i++)
{

int sum=0;
sum=sum+(10*b[i][0])+(a[0]*b[i][1])+(a[1]*b[i][2])+(a[2]*b[i][3])+(a[3]*b[i][4])+(a[4]*b[i][5]);
c[i]=sum;
}
int g=*min_element(c.begin(),c.end());
    cout<<g;
	return 0;
}

