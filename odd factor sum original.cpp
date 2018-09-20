// Formula based CPP program 
// to find sum of all 
// divisors of n.
#include <bits/stdc++.h>
using namespace std;
 
// Returns sum of all factors of n.
int sumofoddFactors(int n)
{
    // Traversing through all
    // prime factors.
    int res = 1;
 
    // ignore even factors by 
    // removing all powers of
    // 2
    while (n % 2 == 0)
        n = n / 2;
 
    for (int i = 3; i <= sqrt(n); i++) 
    {
 
        // While i divides n, print
        // i and divide n
        int count = 0, curr_sum = 1;
        int curr_term = 1;
        while (n % i == 0) {
            count++;
 
            n = n / i;
 
            // this is for the power like 3^0+3^1
			curr_term *= i;
            
            // this is for addition of powers;
            curr_sum += curr_term;
        }
 // for product of every sum;
        res *= curr_sum;
    }
 
    // This condition is to handle
    // the case when n is a prime
    // number.
    if (n >= 2)
        res *= (1 + n);
 
    return res;
}
 
// Driver code
int main()
{
    int n = 30;
    cout << sumofoddFactors(n);
    return 0;
}
