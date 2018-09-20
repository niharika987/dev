#include<bits/stdc++.h>

using namespace std;

int main(){

int a;

char res[1000];

cin>>a;

itoa(a,res,10);

cout<<"Decimal- "<<res<<endl;

itoa(a,res,2);

cout<<"Binary- "<<res<<endl;

itoa(a,res,16);

cout<<"Hexadecimal- "<<res<<endl;

itoa(a,res,8);

cout<<"Octal- "<<res<<endl;return 0;

}
