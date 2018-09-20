#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
	int d;
    cin>>a>>b>>c>>d;
    a=pow(a,b);
    c=pow(c,-1);
    cout<<((a%d)*(c%d))%d;
    return 0;
}
