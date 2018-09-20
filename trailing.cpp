#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;

cin>>n;
for(int j=0;j<n;j++)
{ int i,d=0;

cin>>i;
int q=i;
while(q>=5){
q=i/5;
i=q;
d=d+q;
}

cout<<d;
}

return 0;

}

