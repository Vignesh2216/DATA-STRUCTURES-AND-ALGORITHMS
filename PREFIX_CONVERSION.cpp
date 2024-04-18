// You are using GCC
// You are using GCC
#include<bits/stdc++.h>
using namespace std;
bool is(char c){
    return (!isalpha(c) && !isdigit(c));
}
int get(char c){
    if(c=='^')
    return 3;
    else if(c=='/' || c=='*')
    return 2;
    else if(c=='+' || c=='-')
    return 1;
    else{
        return 0;
    }
}
string infixto(string infix){
    infix='(' + infix + ')';
    int l=infix.size();
    stack<char> char_stack;
    string output;
    for(int i=0;i<l;i++){
        if(isalpha(infix[i]) || isdigit(infix[i]))
        output+=infix[i];
        else if(infix[i]=='(')
        char_stack.push('(');
        else if(infix[i]==')'){
            while(char_stack.top()!='('){
                output+=char_stack.top();
                char_stack.pop();
            }
                char_stack.pop();
        }
        else{
            if(is(char_stack.top())){
                while(get(infix[i])<=get(char_stack.top())){
                    output+=char_stack.top();
                    char_stack.pop();
                }
                char_stack.push(infix[i]);
            }
        }
    }
    return output;
}
string infixtopre(string infix){
    int l=infix.size();
    reverse(infix.begin(),infix.end());
    for(int i=0;i<l;i++){
        if(infix[i]=='('){
            infix[i]=')';
            i++;
        }
        else if(infix[i]==')'){
            infix[i]='(';
            i++;
        }
    }
    string prefix=infixto(infix);
    reverse(prefix.begin(),prefix.end());
    return prefix;
}
int main(){
    char s[100];
    cin>>s;
    cout<<infixtopre(s)<<endl;
    return 0;
}