// You are using GCC
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node* prev;
    node* head;
    node* tail;
};
class dll{
    public:
    node* head;
    node* tail;
    node* temp;
    dll(){
        head=nullptr;
        temp=nullptr;
    }
    void insertatbegin(int data){
        node* newnode1=new node{data,nullptr,nullptr};
        if(head==nullptr){
            head=newnode1;
            temp=newnode1;
        }
        else{
            newnode1->next=head;
            head->prev=newnode1;
            head=newnode1;
        }
    }
    void display(){
        node* temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    void displayrev(){
        node* temp=head;
        if(temp==NULL){
            return;
        }
        while(temp->next!=nullptr){
            temp=temp->next;;
        }
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->prev;
        }
    }
};
int main(){
    int n;
    struct node k;
    cin>>n;
    dll d;
    int m;
    for(int i=0;i<n;i++){
        cin>>m;
        d.insertatbegin(m);
    }
    cout<<"Doubly linked list forwards: ";
    d.displayrev();
    cout<<endl;
    cout<<"Doubly linked list backwards: ";
    d.display();
}