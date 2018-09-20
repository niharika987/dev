#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[7]={3,-1,-2,5,-2,1,-4};
	int b[7];
	b[0]=a[0];
	for(int i=1;i<7;i++)
	b[i]=b[i-1]+a[i];
int ans=0;
map<int,int> m;

for(int j=0;j<7;j++)
{ if(m.find(b[j])==m.end())
	m[b[j]]=j;
	else{
.	
if(j-m[b[j]]>ans)
ans=j-m[b[j]];
}

}
cout<<ans<<endl;

return 0;	
}
