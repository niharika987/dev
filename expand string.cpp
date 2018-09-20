#include <iostream>
#include <string>

using namespace std;

int main() {

string s;
cin>>s;
 


    int counter = 0,flag=0;
	char x;

    for (size_t i = 0; i < s.length(); i++) {

	
        if (s[i] >= '0' && s[i] <= '9')
		 {

		while(s[i]>='0' && s[i]<='9')
		{
		//	cout<<s[i];
            counter = counter*10 + s[i] - '0';
			i++;
		}
		//            continue;
		if (counter>0) {

		i=i-1;
            while(counter) {


               cout << x ;


                counter--;


            }


        }
        

        }
        else
        { 
        	 x=s[i];
        if ((s[i+1] >= 'a' && s[i+1] <= 'z') || i==s.length()-1)
			{
			cout<<x; }
        	counter=0;
        
        }
		
        
	

    }


    cout << endl;


    return 0;


}


 
