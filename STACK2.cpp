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
bool check(int stack[],int x,int a){
    for(int i=0;i<a;i++){
        if(x==stack[i]){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        push(a);
    }
    int x;
    cin>>x;
    if(check(stack,x,n)){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
}