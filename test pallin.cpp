/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
bool ispallin(string s)
{
    int i,j;
    for(i=0,j=s.length()-1;i<s.length(); i++,j-- )
    {
        if(s[i]!=s[j])
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    while(s.length()>0)
    {
        if(ispallin(s))
        {
            break;
        }
        else{
            s.erase(s.begin() + s.length() -1);
            c++;
            
        }
        
    }
    cout<<c;
	//Write code here
	return 0;
}

