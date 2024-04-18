// You are using GCC
#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};
void insert(int data,struct node** root){
    struct node* r=*root;
    struct node* n=new node();
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    if(*root==NULL)
    *root=n;
    else{
        if(r==n){
            return;
        }
        else if(r->data < n->data){
            if(r->right==NULL){
                r->right=n;
                return;
            }
            insert(data,&r->right);
        }
        else if(r->data > n->data){
            if(r->left==NULL){
                r->left==NULL;
            }
            insert(data,&r->left);
        }
    }
}
void display(struct node* root){
    if(root!=NULL){
        display(root->left);
        cout<<root->data<<" ";
        display(root->right);
    }
}
int main(){
    int data;
    node* root=NULL;
    while(1){
        cin>>data;
        if(data<0)
        break;
        insert(data,&root);
    }
    cout<<"Inorder Traversal:"<<endl;
    display(root);
}