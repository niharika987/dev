#include<bits/stdc++.h>
using namespace std;
vector<int> spiral(const vector<vector<int> > &A)
{
    int t=0,b=4,l=0,r=4;
    int dir=0;
    vector<int> s;
   // cout<<b<<" "<<r<<endl;
    b=b-1;
    r=r-1;
   
    while(t<=b && l<=r)
    {
        if(dir==0)
        {
            for(int i=l;i<=r;i++)
            {
            s.push_back(A[t][i]);
            //cout<<A[t][i]<<" ";
			}t++;
            dir=1;
            //cout<<endl;
        }
        else if(dir==1)
        {
            for(int i=t;i<=b;i++)
            {
            s.push_back(A[i][r]);
            //cout<<A[i][r]<<" ";
			}
			//cout<<endl;
			r--;
            dir=2;
        }
        else if(dir==2)
        {
            for(int i=r;i>=l;i--)
           {
            s.push_back(A[b][i]);
           //cout<<A[b][i]<<" ";
		   } b--;
		   //cout<<endl;
            dir=3;
        }
        else if(dir==3)
        {
            for(int i=b;i>=t;i--)
            {
            s.push_back(A[i][l]);
           //cout<<A[i][l]<<" ";
			}l++;
            dir=0;
            //cout<<endl;
        }
       // dir=(dir+1)%4;
    }
    return s;
}

int main()
{ int t;
cin>>t;
while(t--)
{
	
	vector< vector<int> > a(4);
	
	for(int i=0;i<4;i++)
	{  a[i] = vector<int>(4);
		for(int j=0;j<4;j++)
		cin>>a[i][j];
	}
	
vector<int> b=	spiral(a);
for(int i=0;i<b.size();i++)
{
cout<<b[i]<<" ";
if((i+1)%4==0)
cout<<endl;
}
cout<<endl;
    
}
	return 0;

    
}



