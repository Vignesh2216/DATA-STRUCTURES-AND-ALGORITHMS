// You are using GCC
#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* left,*right;
};
void in(int data,struct node** root){
    struct node* r=*root;
    struct node* n=new node();
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    if(*root==NULL)
    *root=n;
    else{
        if(r==n)
        return;
        else if(r->data > n->data){
            if(r->right==NULL){
                r->right=n;
                return;
            }
            in(data,&r->right);
        }
        else if(r->data < n->data){
            if(r->left==NULL){
                r->left=n;
                return;
            }
            in(data,&r->left);
        }
    }
}
void dis(struct node* root){
    if(root!=NULL){
        dis(root->right);
        dis(root->left);
        cout<<root->data<<" ";
    }
}
int main(){
    int data;
    node* root=NULL;
    while(1){
        cin>>data;
        if(data<0)
        break;
        in(data,&root);
    }
    cout<<"POSTORDER TRAVERSAL:"<<endl;
    dis(root);
}