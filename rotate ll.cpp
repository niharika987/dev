 /ListNode * temp=A;
    if(B==0)
    return A;
    int count=1;
    while(count<B && temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    if(temp==NULL)
    return A;
    
    ListNode *knode=temp;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=A;
    A=knode->next;
    knode->next=NULL;
    return A;
