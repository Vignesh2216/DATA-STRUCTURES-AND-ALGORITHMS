// You are using GCC
// You are using GCC
#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
void inserAtbegin(int data,struct node** head){
    struct node* h=*head;
    struct node* newnode=new node();
    newnode->data=data;
    newnode->next=NULL;
    if(*head==NULL){
        *head=newnode;
    }
    else{
        newnode->next=h;
        *head=newnode;
    }
}
void printNode(struct node* head){
    struct node* h=head;
    while(h->next!=NULL){
        cout<<h->data<<" ";
        h=h->next;
    }
    cout<<h->data;
}
int main(){
    struct node* head=NULL;
    int i,num,data;
    cin>>num;
    for(i=0;i<num;i++){
        cin>>data;
        inserAtbegin(data,&head);
    }
    printNode(head);
}