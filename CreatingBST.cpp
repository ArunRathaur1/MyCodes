#include <iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

void insertBST(node*& root,int data){
    if(root==NULL){
        root=new node(data);
        return;
    }
    if(root->data>=data)
    insertBST(root->left,data);
    else
    insertBST(root->right,data);
}
void takeinput(node*&root){
    int data;
    cin>>data;
    while(data!=-1){
        insertBST(root,data);
        cin>>data;
    }
}
void levelOrder(node* root){
    if(root==NULL)
    return ;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* tem=q.front();
        q.pop();
        if(tem==NULL)
        {
            cout<<endl;
            if(!q.empty())
            q.push(NULL);
        }
        else{
            cout<<tem->data<<" ";
            if(tem->left)
            q.push(tem->left);
            if(tem->right)
            q.push(tem->right);
        }
    }
}
int main()
{
    node* root=NULL;
    takeinput(root);
    levelOrder(root);
}
