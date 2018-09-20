#include <iostream>

 using namespace std;
struct Node {
    int data;
  Node* next;
};
 
Node*  reverse(Node *head)
 {
    Node* cur=head;
    Node* p=NULL;
	Node* nex;
    while(cur!=NULL)
    { nex=cur->next;
     cur->next=p;
     p=cur;
     cur=nex;
        
    }
    head=p;
    return head;
 }
Node* reverseBetween(Node* A, int B, int C) {
   int i=1;
   if(B==C)
   return A;
 Node *c=A;
   Node *rs=NULL, *rp=NULL, *rn=NULL,*re=NULL;
   while(c!=NULL && i<=C)
   {
       
       if(i==B)
       rs=c;
       
       if(i==C)
       {re=c;
       rn=c->next;
        }
        
        
       if(i<B)
       rp=c;
         i++;
       c=c->next;
    }
    
    re->next=NULL;
    
    re=reverse(rs);
    if(rp)
    rp->next=re;
    else
    A=re;
    
    
    rs->next=rn;
    
    
    return A;
}

 
void print(struct Node* head)
{
    while (head != NULL) {
        cout<< head->data<<" ";
        head = head->next;
    }
    cout<<"\n";
}
 
Node* push(Node*head, int data)
{
     Node* newnode = new Node;
    newnode->data = data;
    newnode->next = NULL;
    if(head==NULL)
    {
    	head=newnode;
    	return  head;
    }
    else{
    
	Node* temp=head;
    
    while(temp->next!=NULL)
    {
    	temp=temp->next;
    }
   temp->next=newnode;
}
return head;
}
 

int main()
{
   Node* head = NULL;
    
   
    
   Node* h=push(head, 70);
    h= push(h, 60);
     h= push(h, 50);
      h= push(h, 40);
    h=push(h, 30);
    h=push(h, 20);
    h=push(h, 10);
        
 h=  reverseBetween(h, 3, 6);
print(h);
    return 0;
}


