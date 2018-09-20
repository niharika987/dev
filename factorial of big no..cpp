#include<bits/stdc++.h>
using namespace std;
 
// Maximum number of digits in output
#define MAX 500
//int multiply(int x, int res[], int res_size)
 
int multiply(int x, int res[], int res_size)
{
    int carry = 0;  
 
    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;  
		     carry  = prod/10;    }
 
    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}
 
 int factorial(int n)
{
    int res[MAX];
 
    res[0] = 1;
    int res_size = 1;
 
    for (int x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);
 
  //  cout << "Factorial of given number is n";
    //for (int i=res_size-1; i>=0; i--)
      //  cout << res[i];
reverse(res,res+res_size);
return *res;
}
 long pow(long n, int a[]){
  int prod = 1;
  while (exp > 0){
    if ((exp & 1) != 0)
       prod *= n;
    n*=n;
    exp >>= 1;
  }
  return prod;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{ long long a;
	int b;
	cin>>a>>b;
cout<<(pow(a,factorial(b)))%1000000007;
	}
    
    return 0;
}


