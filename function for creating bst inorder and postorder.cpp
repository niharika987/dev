/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 /*TreeNode* createNode(int data)
	{
		TreeNode *newnode=new TreeNode;
		newnode->val=data;
		newnode->left=newnode->right=NULL;
	}
 */
static int pe;
 TreeNode *createtree(vector<int> &A, vector<int> &B,int is,int ie)
	{
		
		if(is>ie)
		return NULL;
	//	TreeNode *root=createNode(B[p]);
	TreeNode *root=new TreeNode(B[pe--]);
	//	pe--;
		
		if(is==ie)
		return root;
		
		int j=0;
		for( j=is;j<=ie;j++)
		{
			if(A[j]==root->val)
			break;
		}
	//	if(j!=is)
		root->right=createtree(A,B,j+1,ie);
		
		root->left=createtree(A,B,is,j-1);
		
		//if(j!=ie)
		
		return root;
	}
	
 
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
   // int is=0;
    int ie=A.size();
    pe=ie-1;
// int p=ie-1;
    TreeNode * head=createtree(A,B,0,ie-1);
    return head;
}

