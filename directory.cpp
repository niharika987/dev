string Solution::simplifyPath(string A) {
    stack<string> s1;
    for(int i=0;i<A.size();i++)
    { string s;
    if(A[i]=='/')
    {
        
    int x=A.find("/",i+1);
    s=A.substr(i,x);
    cout<<s<<endl;
    if(s=="/.." && !s1.empty())
    s1.pop();
    else if(s=="/."){cout<<"hfds";
    }
    else
    {s1.push(s);
    
    cout<<s1.top();    
    }
    
    }
    
    }
    return s1.top();
}



if(A[i]=='/')
    {
        
    size_t x=A.find("/",i+1);
    s=A.substr(i,x-i);
    cout<<s<<endl;
    /*if(s=="/.." && !s1.empty())
    {s1.pop();
    }
    else if(s=="/.")
    {
       
    }
    else
    {
        if(s=="/")
    {}
    else{
        s1.push(s);
     //cout<<"hfds";
    cout<<s1.top();
    }
    
    }
    */
    }
    s1.push(s);
    cout<<s1.top();
