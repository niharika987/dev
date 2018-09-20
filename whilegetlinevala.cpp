#include<bits/stdc++.h>
using namespace std;
int main()
{

string s, s1;

    while(getline(cin , s)){

        bool flag = false;
        s1= "";

        for(int i = 0; i < s.size(); i++){

            if(flag){

                s1 =s1+ s[i];
                continue;
            }

            if(i < s.size() - 1 && s[i] == '/' && s[i + 1] == '/')  {

                s1 =s1+ "//";
                flag = true;
                i++;
            }

            else if(i < s.size() - 1 && s[i] == '-' && s[i + 1] == '>'){

                s1 =s1+ '.';
                i++;

            } else s1 =s1+ s[i];
        }
 cout << s1 << "\n";
    }

    return 0;
}
