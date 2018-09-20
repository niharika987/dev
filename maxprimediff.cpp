#include <bits/stdc++.h>

using namespace std;

int maxDifference(int startVal, int endVal) {
    // Complete this function
    int flag=0,flag1=0;
	while(startVal<=endVal)
    {
    int count=0,count1=0;
    for(int i=2;i<=sqrt(startVal);i++)
    {
        if(startVal%i==0)
            count++;
    }
    
     for(int i=2;i<=sqrt(endVal);i++)
    {
        if(endVal%i==0)
            count1++;
    }
        
       
    if(count>0)
        startVal++;
if(count1>0)
        endVal--;


    if(count==0)
        {
     flag=1;   
        
    }
    if(count1==0)
        {
 flag1=1;
       
}
 if(flag==1 && flag1==1)
	return endVal-startVal;
        
    }
	return 0;
   
    
   
    
    
    }

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int startVal;
        int endVal;
        cin >> startVal >> endVal;
        int result = maxDifference(startVal, endVal);
        cout << result << endl;
    }
    return 0;
}

