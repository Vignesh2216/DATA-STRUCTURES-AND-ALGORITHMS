// You are using GCC
#include<iostream>
#include<algorithm>
using namespace std;
struct node{
    char data;
    node* left;
    node* right;
};
void in(int data,struct node** root){
    struct node* r=*root;
    struct node* n=new node();
    n->data=data;
    n->right=NULL;
    n->left=NULL;
    if(*root==NULL)
    *root=n;
    else{
    if(r==n)
    return;
    else if(r->data > n->data)
    {
        if(r->left==NULL)
        r->left=n;
        in(data,&r->left);
    }
    else if(r->data < n->data)
    {
        if(r->right==NULL)
        r->right=n;
        in(data,&r->right);
    }
    }
}
string str;
void dis(node* root){
    node* r=root;
    if(r!=NULL){
        dis(r->left);
        if(r->data>='a' && r->data<='z')
        str+=r->data;
        else
        cout<<r->data<<" ";
        dis(r->right);
    }
}
int main(){
    node* root=NULL;
    int num;
    char data;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>data;
        in(data,&root);
    }
    dis(root);
    cout<<endl;
    reverse(str.begin(),str.end());
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
    }
}