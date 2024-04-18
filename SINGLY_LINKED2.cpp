// You are using GCC
#include<iostream>
using namespace std;
struct node{
    int a;
    struct node* next;
};
void is(struct node** head,int b){
    struct node* h=*head;
    struct node* n=new node();
    n->a=b;
    n->next=NULL;
    if(*head==NULL){
        *head=n;
    }
    else{
        while(h->next!=NULL){
            h=h->next;
        }
        h->next=n;
    }
}
void in(struct node* head){
    struct node* h=head;
    while(h->next!=NULL){
        cout<<h->a<<" ";
        h=h->next;
    }
    cout<<h->a;
}
int main(){
    struct node* head=NULL;
    int a,b;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>b;
        is(&head,b);
    }
    in(head);
}