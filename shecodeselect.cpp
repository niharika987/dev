#include<bits/stdc++.h>
using namespace std;

long long Solve (int K, vector<int> arr) {
   // //Write code here
  // sort(arr.begin(),arr.end(),greater<int>());
   int x=0,sum=0,sum1=0;
  int summ=0;
   while(x<K)
   {
       sum=sum+arr[x];
       sum1=sum1+arr[arr.size()-1-x];
	c     if(sum>sum1)
       summ=sum;
       else
       summ=sum1;
       
       x++;
   }

   if(sum>sum1)
   return sum;
   else return sum1;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int K;
    cin >> K;
    int N;
    cin >> N;
    vector<int> arr(N);
    for(int i_arr=0; i_arr<N; i_arr++)
    {
    	cin >> arr[i_arr];
    }

    long long out_;
    out_ = Solve(K, arr);
    cout << out_;
}
