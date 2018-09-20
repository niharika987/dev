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
void create(node** h)
{ node* p=(*h);
node* e=NULL;
node* o=NULL;
	int i=0;
	while(p!=NULL)
	{
		if(i%2==0)
		insert(&e,p->data);
		else
		insert(&o,p->data);
		p=p->next;
		i++;
	}
	
	node* k=e;
	
	while(k->next!=NULL)
	{
		k=k->next;
	}
	                                                                                                                                                           4y
	                                                                                                                                                           
}
int main()
{
 int a[6]={11,12,30,4,50,600};
 node* h=NULL;
	for(int i=0;i<6;i++)
        { //cout<<i<<endl;
            //cin>>x;
            insert(&h,a[i]);
        }
        create(&h);
	return 0;
}
