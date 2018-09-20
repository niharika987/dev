#include<bits/stdc++.h>
using namespace std;
int main()
{ int a;
double bal;
cin>>a>>bal;
if((a%5==0) && a<bal)
{

double b=a+0.50;
bal=bal-b;
}
printf("%.2f\n",bal);
return 0;

}

