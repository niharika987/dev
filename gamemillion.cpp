#include<bits/stdc++.h>

using namespace std;
int main()
{
	int t;
	cin>>t;
while(t--)
{ int n;
cin>>n;
char a[n];
for(int i=0;i<n;i++)
cin>>a[i];

char b[n];
for(int i=0;i<n;i++)
cin>>b[i];


    long *c = new long[(n+1)*sizeof(long)];
for(int i=0;i<=n;i++)
cin>>c[i];

int count=0;
for(int i=0;i<n;i++)
{
	if(a[i]==b[i])
	count++;
}
int max=-1;
 for(int i = 0; i <= count; ++i)
            if(max < c[i])
                max = c[i];
        if(count != n)
            cout<<max << endl;
        else
            cout<<c[n] <<endl;
}
return 0;
}
