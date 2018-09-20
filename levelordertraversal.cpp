	void levelOrder(Node * root){
      //Write your code here
  	queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            Node *x=q.front();
            q.pop();
            cout<<x->data<<" ";
            if(x->left!=NULL)
            q.push(x->left);
            if(x->right!=NULL)
            q.push(x->right);
        }
  
	}
