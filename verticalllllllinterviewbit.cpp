 map<int,vector<int> > hs;
        int hr=0;
        queue<pair<TreeNode*,int> > q;
        q.push(make_pair(A,0));
        while(!q.empty())
        {
            pair<TreeNode*,int> t=q.front();
            hr=t.second;
            q.pop();
        hs[hr].push_back(t.first->val);
        if(t.first->left!=NULL)
            q.push(make_pair(t.first->left,hr-1));
        if(t.first->right!=NULL)
            q.push(make_pair(t.first->right,hr+1));            

        }
        
        vector< vector<int> >v1;
    map<int,vector<int> >::iterator i;
    int c=0;
    for(i=hs.begin();i!=hs.end();i++)
         { 
          vector<int> t1;
          v1.push_back(t1);
          t1=i->second;
             for(int j=0;j<t1.size();j++)
     {v1[c].push_back(i->second[j]);
         }
      c++;
         }
