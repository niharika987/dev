/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 struct compare{
 bool operator() (ListNode* a,ListNode* b)
{
    if(a->val>b->val)
    return true;
    else
    return false;
}

};

ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
//vector<ListNode*> ar;
//for(int i=0;i<A.size();i++)
//ar.push_back(A[i]);
ListNode* a2;
ListNode* head=NULL;
ListNode* h1=NULL;


priority_queue <ListNode*,vector<ListNode* >, compare >p;
for(int i=0;i<A.size();i++)
{
    p.push(A[i]);
  
}
 while(!p.empty())
    {
        ListNode *temp=p.top();
        //cout<<temp->val<<endl;
        p.pop();
        if(head==NULL)
{
        a2=new ListNode(temp->val);

    head=a2;
   h1=head;
}       
else{  
    
    a2=new ListNode(temp->val);
        
        h1->next=a2;
        h1=h1->next;
}
        temp=temp->next;
        if(temp!=NULL)
        p.push(temp);
 
        
    }
return head;
    
}

