#include<bits/stdc++.h>
using namespace std;
 

int sq(int a, int b)
{
    long long res = 0, rm = 0;
 
    if (a < b)
        swap(a, b);
 
   
    while (b > 0)
    {
   
        res += a/b;
 
        long long rm = a % b;
        a = b;
        b = rm;
    }
 
    return res;
}
 

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
int x,y;
cin>>x>>y;	
  
    cout << sq(x, y)<<endl;
}
	return 0;
}
