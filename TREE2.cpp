// You are using GCC
#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
};
void in(int data,struct node** root){
    struct node* n=new node();
    struct node* r=*root;
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    if(*root==NULL){
        *root=n;
    }
    else{
        if(r==n)
        return;
        else if(r->data > n->data){
            if(r->left==NULL)
            r->left=n;
            in(data,&r->left);
        }
        else if(r->data < n->data){
            if(r->right==NULL)
            r->right=n;
            in(data,&r->right);
        }
    }
}
void dele(int del,struct node** root){
    struct node* r=*root;
    if(*root!=NULL)
    {
        if(r->data==del){
            if(r->left==NULL && r->right==NULL){
                *root=NULL;
                return;
            }
            else if(r->left==NULL){
                *root=r->right;
                return;
            }
            else if(r->right==NULL){
                *root=r->left;
                return;
            }
            else{
                struct node* temp=*root;
                while(temp->right!=NULL){
                    temp=temp->right;
                }
                int max=temp->data;
                r->data=max;
                dele(max,&r->right);
            }
        }
        else if(r->data >del){
            dele(del,&r->left);
        }
        else if(r->data <del){
            dele(del,&r->right);
        }
    }
}
void dis(struct node* root){
    struct node* r=root;
    if(r!=NULL){
        dis(r->left);
        cout<<r->data<<" ";
        dis(r->right);
    }
}
int main(){
    struct node* root=NULL;
    int num,data,i;
    cin>>num;
    for(i=0;i<num;i++){
        cin>>data;
        in(data,&root);
    }
    int del;
    cin>>del;
    cout<<"AFTER DELETION"<<endl;
    dele(del,&root);
    dis(root);
}