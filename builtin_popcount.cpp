#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int x=__builtin_popcount(n);
        // return set bits in n(binary form);
        while(x+1!=__builtin_popcount(n)) // while no of set bits (inc by 1) not matches no of set bits in n.... increment n by 1
        n++;
        cout<<n<<endl;
    }
    return 0;
    
}
