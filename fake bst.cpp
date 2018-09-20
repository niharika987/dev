#include <bits/stdc++.h>
using namespace std;
 
void b_s(long long  x, long long n, vector<long long> &input, map<int, int> &index, map<int, int> &sthan, map<int, int> &lthan)
{
  int indexreq = index[x], largerthan = lthan[x], smallerthan = sthan[x];
  long long low, high, mid, swaplarger = 0, swapsmaller = 0, finalans = 0;
  low = 0;
  high = n - 1;
  while (low <= high)
  {
        mid = (low + high) / 2;
        if (input[mid] == x)
            break;
        else if(input[mid] < x)
        {
          if(indexreq < mid)
          {
            swaplarger++;
            high = mid - 1;
          }
          else if(indexreq > mid)
          {
            largerthan--;
            low = mid + 1;
             }
        }
        else if(input[mid] > x)
        {
          if(indexreq < mid)
          {
            smallerthan--;
            high = mid - 1;
          }
          else if(indexreq > mid)
          {
            swapsmaller++;
            low = mid + 1;
          }
        }
    }
    if(swaplarger==swapsmaller)
    {
          finalans= swaplarger;
          swaplarger = 0;
          swapsmaller = 0;
    }
    else if(swaplarger < swapsmaller)
    {
      if(swapsmaller > largerthan)
      {
        finalans = -1;
      }
      else
      {
        finalans = swapsmaller;
      }
    }
    else if(swaplarger > swapsmaller)
    {
      if(swaplarger > smallerthan)
      {
        finalans = -1;
      }
      else
      {
        finalans = swaplarger;
      }
    }
 
  cout<<finalans<<endl;
 
}
int main()
{
  int t, n, q;
  cin>>t;
  for(int i = 0; i < t; i++)
  {
    cin>>n>>q;
    vector<long long> input(n), qu(q), sorted(n);
    map<int, int> index, sthan, lthan;
    for(int j = 0; j < n; j++)
    {
      cin>>input[j];
      index[input[j]] = j;
    }
    sorted = input;
    sort(sorted.begin(), sorted.end());
    for(int j = 0; j < n; j++)
    {
      sthan[sorted[j]] = n - j - 1;
      lthan[sorted[j]] = j;
    }
    for(int j = 0; j < q; j++)
    {
      cin>>qu[j];
      b_s(qu[j], n, input, index, sthan, lthan);
    }
  }
}
 
