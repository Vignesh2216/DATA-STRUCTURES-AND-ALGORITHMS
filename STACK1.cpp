// You are using GCC
#include<iostream>
using namespace std;
int stack[100];
int top=-1,maxsize=100;
void push(int data){
    if(top==maxsize-1){
        cout<<"Stack is full";
    }
    else{
        top++;
        stack[top]=data;
    }
}
void display(){
    if(top==-1){
        cout<<"Stack is empty";
    }
    else{
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<endl;
        }
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        push(a);
    }
    cout<<"Stack elements"<<endl;
    display();
}