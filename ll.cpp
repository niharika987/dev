#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct node {
    int data;
    struct node* next;
};
void insert( node** head_ref, int data)
{
    if((*head_ref)==NULL)
    {
    	(*head_ref)=new node();
        (*head_ref)->data=data;
        (*head_ref)->next=NULL;
        return ;
    }
     node* n1 = new node();
              
    n1->data = data;
    n1->next=NULL;
    node* p=(*head_ref);
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next = n1;
       
}
void rotate1(node** pr1,node** p1,int k)
{
    if(k==0)
        return;
    node* n2=(*pr1);
    int c=1;
    while(c<k)
    {
        n2=n2->next;
    c++;
    }
    node* kt=n2;
    while(n2!=(*p1))
    {
        n2=n2->next;
    }
    (*p1)=(*p1)->next;
    n2->next=(*pr1);
    (*pr1)=kt->next;
kt->next=(*p1);
}

void printll(node** head,node** p1)
{
    node* p=(*head);
    while(p!=(*p1))
    {
        cout<<p->data<<" ";
        p=p->next;
    } //cout<<p->data<<" ";
}
void rotate(node** head_ref,int m,int k)
{
    int c=1;
   // node *d=NULL;
    node* pr1=(*head_ref);
    node* p1=(*head_ref);
    while(p1->next!=NULL)
    {
        p1=p1->next;
        c++;
        if(c==m)
        { //if(p1->next)
            rotate1(&pr1,&p1,m-k);
                        
			printll(&pr1,&p1);
       // cout<<endl;
		    pr1=p1;
            c=0;
        }
    }
	if(c+1==m)
	{
	rotate1(&pr1,&p1,m-k);
    printll(&pr1,&p1);  
	cout<<endl;                
}
else{
	  while(pr1!=NULL)
    {
        cout<<pr1->data<<" ";
        pr1=pr1->next;
    }    cout<<endl;
}
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
        int x,n,m,k;
        cin>>n>>m>>k;
        node* h=NULL;
        for(int i=0;i<n;i++)
        { //cout<<i<<endl;
            cin>>x;
            insert(&h,x);
        }
        rotate(&h,m,k);
       // printll(&h);
    }
    return 0;
}

