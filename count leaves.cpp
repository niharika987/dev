#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];

	int d;
	cin>>d;

queue<int> q;
q.push(d);
int y=q.front();

while(!q.empty())
{
	int x=q.front();


	if(x>n)
	break;
	a[x]=-10;

		q.pop();
	q.push((x*2)+1);
	q.push((x*2)+2);

}

int count=0;
for(int i=0;i<n;i++)
{
 if(a[i]==-10)
 continue;
 else{
     if((2*i)+2>n && (2*i)+1>n  )
    { 
      count++;
    } 
	else if((2*i)+1>n  )
     { 
     count++;
   
   }
else if((2*i)+2>n)
count++;
     
 }
}

cout<<count;
    
}

