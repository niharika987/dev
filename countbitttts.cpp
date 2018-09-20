#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{ cin>>k;
       if(k == 1 || k == 2 ){
           cout<<"1\n";
           continue;
       }
       if(k == 3){
           cout<<2<<"\n";
           continue;
       }
        ll low = 1;
        ll high = k;
        ll mid;
        ll lcount;
        ll rcount;
while(1){
    		mid=(low+high)/2;
    		lcount=log2(k/mid)+1;
    		rcount=log2(mid)+1;
    		
    		if((lcount)>rcount){
    				if(low!=mid)	
    					low=mid;
    				else
    					break;
    		}else{
    				if(high!=mid)
    			 		high=mid;
    			 	else
    			 		break;
    		}
			
		}
        //cout<<mid<<"\n";
        cout<<k-high+1<<"\n";
   }
	
		//cout<<count+(n-m)<<"\n";
	//	cout<<x+y<<"\n";                        
		
	}
	return 0;
}
