// You are using GCC
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int pre(char ch){
    if(ch=='^')
    return 3;
    else if(ch=='*' || ch=='/')
    return 2;
    else if(ch=='+' || ch=='-')
    return 1;
    else
    return 0;
}
int main(){
    string infix="",postfix="";
    stack<char>stack;
    cin>>infix;
    for(int i=0;i<infix.length();i++){
        char ch=infix[i];
        if(ch=='(')
        stack.push(ch);
        else if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
        postfix+=ch;
        else if(ch==')')
        {
            while(!stack.empty() && stack.top()!='('){
                postfix+=stack.top();
                stack.pop();
            }
            stack.pop();
        }
        else{
            while(!stack.empty() && (pre(ch)<=pre(stack.top()))){
                postfix+=stack.top();
                stack.pop();
            }
            stack.push(ch);
        }
    }
    while(!stack.empty()){
        postfix+=stack.top();
        stack.pop();
    }
    cout<<postfix;
}