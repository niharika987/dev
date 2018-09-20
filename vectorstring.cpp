#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) 
{
   vector< int> z;
    char ch;
    stringstream ss;
    ss<<str;
    int a, b, c;
    
/*ss >> a >> ch >> b >> ch >> c; 
    z.push_back(a);
    z.push_back(b);
    z.push_back(c);
  */
  int temp;
  while(ss>>temp)
  {
  	z.push_back(temp);
  	ss>>ch;
  }
    return z;
    

}

int main() {
    string str;int count=0;
  /*  while(cin>>str)
    {
    	count++;
    	if(str=="n")
    	break;
    }
   cout<<count;
   
   */
   cin>>str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

