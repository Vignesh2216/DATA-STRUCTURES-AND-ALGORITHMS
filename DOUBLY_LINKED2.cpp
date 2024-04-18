// You are using GCC
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node* prev;
};
class DLL{
    public:
    node* head;
    node* tail;
    DLL(){
        head=nullptr;
        tail=nullptr;
    }
    void insertend(int data){
        node* newnode=new node{data,nullptr,nullptr};
        if(head==nullptr){
            head=newnode;
            tail=newnode;
        }
        else{
            newnode->prev=tail;
            tail->next=newnode;
            tail=newnode;
        }
    }
    void display(){
        node* temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    int n;
    cin>>n;
    DLL di;
    for(int i=0;i<n;i++){
        int d;cin>>d;
        di.insertend(d);
    }
    di.display();
}