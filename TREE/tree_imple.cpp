#include<bits/stdc++.h>
using namespace std;
 

//node for binary tree
class treeNode{
    public:
    int data;
     treeNode* left;
     treeNode* right;
     

     treeNode(int da){
         data=da;
         left=right=NULL;
     }
};


//taking input in binary tree;
treeNode* insert(treeNode* root){
    cout<<"enter element ";
    int n;
    cin>>n;
 
    if(n==-1){
        return NULL;
    }
    root=new treeNode(n);
    cout<<"enter left element "<<root->data<<endl;
    root->left=insert(root->left);
    cout<<"enter right element "<<root->data<<endl;
    root->right=insert(root->right);
   return root;
}

//preorder traversal using recursion 
void preOrder(treeNode* root){
    if(root){
        cout<<root->data<<endl;
        preOrder(root->left);
        preOrder(root->right);
    }
}
// leverl order traversing 
void levelOrder(treeNode* root){
    if(root==NULL){
        return;
    }
    queue<treeNode*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        treeNode* temp=q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);

            }
        }else{
          cout<<temp->data<<" ";
            if(temp->left!=NULL){
                q.push(temp->left);
            }

            if(temp->right!=NULL){
                q.push(temp->right);
            }
       }

    }

}

//preorder traversal using iterative
void preOrderIt(treeNode* root){
    treeNode* temp=root;
    stack<treeNode*> s;
    while(temp || !s.empty()){
        if(temp){
            cout<<temp->data<<" ";
            s.push(temp);
            temp=temp->left;
        }else{
            temp=s.top();
            s.pop();
            temp=temp->right;
        }
    }
}


void inOrderIte(treeNode* root){
    treeNode* temp=root;
    stack<treeNode*> s;
    while(temp || !s.empty()){
        if(temp){
            s.push(temp);
            temp=temp->left;
        }else{
            temp=s.top();
            s.pop();
            cout<<temp->data<<" ";
            temp=temp->right;
        }
    }
}

//CONSTRUCT BINARY TREE USING PREORDER AND INORDER
treeNode* builTdree(vector<int>& inOrder,int inStart,int inEnd,vector<int> & preOrder,int preStart,int preEnd,map<int,int>& s){
    if(inStart>inEnd){
        return NULL;
    }

     treeNode* root=new treeTNode(preOrder[preStart]);
     int indexInRoot=s[root->data];
     int numsleft=indexInRoot-inStart;

     root->left=builTdree(inOrder,inStart,indexInRoot-1,preOrder,preStart+1,preStart+numsleft,s);
     root->right=builTdree(inOrder,indexInRoot+1,inEnd,preOrder,preStart+numsleft+1,preEnd,s);

    return root;
}

treeNode* buildTree(vector<int> & Inorder,vector<int> & preOrder){
    map<int,int> s;
    for(int i{};i<Inorder.size();i++){
         s[Inorder[i]]=i;
    }
     treeNode* root=buildTree(Inorder,0,Inorder.size()-1,preOrder,0,preOrder.size()-1,s);
     return root; 

}

//CONSTRUCT BINARY TREE USING POSTORDER AND INORDER
treeNode* buildPtree(vector<int> & InOrder,int inStart,int inEnd,vector<int>& PostOrder,int poStart,int poEnd,map<int,int>& s){
    if(inStart>inEnd || poStart>poEnd){
        return NULL;
    }
   
    treeNode* root=new treeNode(PostOrder[poEnd]);

    int indexInRoot=s[PostOrder[poEnd]];
    int numsleft=indexInRoot-inStart;
   
    root->left=buildPtree(InOrder,inStart,indexInRoot-1,PostOrder,poStart,poStart+numsleft-1,s);
  
    root->right=buildPtree(InOrder,indexInRoot+1,inEnd,PostOrder,poStart+numsleft,poEnd-1,s);
   
    return root;
}

treeNode* buildPtree(vector<int>& InOrder,vector<int>& PostOrder){
    map<int,int> s;
    for(int i{};i<InOrder.size();i++){
        s[InOrder[i]]=i;
    }

    treeNode* root= buildPtree(InOrder,0,InOrder.size()-1,PostOrder,0,PostOrder.size()-1,s);
    return root;
}




int main(){
 //   treeNode* root=insert(root);
  vector<int> pre{10,20,40,50,30,60};
  vector<int> In{40,20,50,10,60,30};
  vector<int> po{40,50,20,60,30,10};
  vector<int> in{40,20,50,10,60,30};
 //   treeNode* root=buildTree(In,pre);
  treeNode*  root=buildTree(in,po);
  preOrder(root);
  cout<<"level order"<<endl;
  levelOrder(root);
  cout<<"preorder using iterative"<<endl;
  preOrderIt(root);
  cout<<"Inorder using iterative"<<endl;
  inOrderIte(root);
   
 return 0;
}