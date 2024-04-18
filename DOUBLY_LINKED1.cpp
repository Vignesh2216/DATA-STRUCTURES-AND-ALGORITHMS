// You are using GCC
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
class DLL{
    public:
    node* head;
    node* tail;
    
    DLL(){
        head=nullptr;
        tail=nullptr;
    }
    void insertBegin(int data){
        node* newnode=new node{data,nullptr,nullptr};
        if(head==nullptr){
            head=newnode;
            tail=newnode;
        }
        else{
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
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
    DLL dl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        dl.insertBegin(d);
    }
    dl.display();
}