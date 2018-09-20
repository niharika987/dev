void reverse()
{
    int c=1;
    node *current,*prev,*temp;
    current=head;
    prev=NULL;
    std::stack<int>s;
    while(current!=NULL)
    {
        c++;
        s.push(current->data);
        current=current->next;
    }

    int mid=0;
    if((c%2)==0)
    {
        mid=c/2;
    }
    else
    {
        mid=(c+1)/2;
    }
    current=head;
    for(int i=0;i<mid;i++)
    {
        cout<<current->data<<"\t";
        current=current->next;
    }

    for(int i=mid;i>1;i--)
    {
       std::cout<<s.top()<<"\t";
       s.pop();
    }
    std::cout << '\n';
}
