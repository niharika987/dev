#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
    cin>>n;
    while(n--)
    {
 int n1;
 cin>>n1;
 if(n1%21==0 )
 {cout<<"The streak is broken!"<<endl;
 continue;
    }
  stringstream ss;
ss << n1;
string str = ss.str();
if (str.find("21") != std::string::npos) {
   cout << "The streak is broken!" << "\n";
   continue;
}
else
{
	cout<<"The streak lives still in our heart!"<<endl;
}
    
 
    }
    return 0;
}
  
