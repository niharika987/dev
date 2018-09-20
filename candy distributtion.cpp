int candy(vector<int> &ratings) 
{
            int candiesCnt = 0, curCandy, pos;
            vector<pair<int, int> > valueWithPos; 
            for (int i = 0; i < ratings.size(); i++) {
                valueWithPos.push_back(make_pair(ratings[i], i));
            }
            sort(valueWithPos.begin(), valueWithPos.end());

            vector<int> candies (ratings.size(), 0);
            
			for (int i = 0; i < valueWithPos.size(); i++) 
			{
                pos = valueWithPos[i].second;
                curCandy = 0;
                
				if (pos > 0 && ratings[pos - 1] < ratings[pos]) {
                    curCandy = candies[pos - 1];
                }
				 
                if (pos < ratings.size() - 1 && ratings[pos + 1] < ratings[pos])
				{
                    curCandy = max(curCandy, candies[pos + 1]);
                }
                candies[pos] = curCandy + 1;
                candiesCnt += candies[pos];
            }
            
            return candiesCnt;
        }























/* vector<pair<int,int> >v;
    for(int i=0;i<A.size();i++)
    {
        v.push_back(make_pair(A[i],i));
    }
    int ar[A.size()];
    
    for(int i=0;i<A.size();i++)
    ar[i]=0;
    sort(v.begin(),v.end());
    int x=v[0].second;
    ar[x]=1;
    for(int i=1;i<A.size();i++)
    {  //cout<<v[i].first;
       
        if((v[i].second+1)<A.size() && ar[v[i].second]==0   )
    {
       /* if((A[v[i].second+1]==A[v[i].second-1] && A[v[i].second-1]== v[i].first )|| (A[v[i].second+1]<=A[v[i].second] && A[v[i].second-1]==A[v[i].second] ))  
    {// cout<<A[v[i].second+1]<<" "<<A[v[i].second+1]<<" "<<v[i].first;
        int m=ar[v[i].second-1];
        
        ar[v[i].second]=m;
        // cout<< v[i].second<<m<<"fdnhbj"<<endl;
    }
    //else{
        int m=max(ar[v[i].second-1],ar[v[i].second+1]);
        
        ar[v[i].second]=m+1;
         cout<< v[i].second<<m+1<<endl;
    
    //}
    
    }
        
    else if((v[i].second+1)==A.size() )
    {  
        /*cout<<"hello"<<endl;
        if(v[i].first==A[v[i].second-1])
    { cout<<"hello1";
        int m=ar[v[i].second-1];
        ar[v[i].second]=m;
    }
    else if(v[i].first<A[v[i].second-1])
    {
        int m=ar[v[i].second-1];
        ar[v[i].second]=m+1;
    }
    else {
        int m=ar[v[i].second-1];
        cout<<"hello2";
        ar[v[i].second]=m   ;
        cout<< v[i].second<<m+1<<endl;
    //}
      
    }
    
    }
    int s=0;
    for(int i=0;i<A.size();i++)
        s=s+ar[i];
        if(x==0)
    return s;
    else
    return s+1;
    */
