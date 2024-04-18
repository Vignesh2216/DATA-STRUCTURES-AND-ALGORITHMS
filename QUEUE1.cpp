// You are using GCC
// You are using GCC
#include<iostream>
#include<string>
#include<queue>
using namespace std;
int main(){
    string str,st="";
    getline(cin,str);
    int q1c=0,q2c=0;
    queue<string> q1;
    queue<string> q2;
    for(int i=0;str[i];i++){
        if(str[i]==','){
            if(st[0]=='S' && st[st.length()-1]=='a'){
                q1.push(st);
                q1c++;
            }
            else{
                q2.push(st);
                q2c++;
            }
            st="";
        }
        else{
            st+=str[i];
        }
    }
    if(st[0]=='S' && st[st.length()-1]=='a'){
        q1.push(st);
        q1c++;
    }
    else{
        q2.push(st);
        q2c++;
    }
    if(q1c>10 || q2c>10)
        cout<<"Queue if full"<<endl;
    cout<<"Queue 1:"<<endl;
    if(q1.empty())
    cout<<"No elements in the Queue";
    else{
        int j=0;
        while(!q1.empty() && j<10){
            cout<<q1.front()<<endl;
            q1.pop();
            j++;
        }
    }
    cout<<"Queue 2:"<<endl;
    if(q2.empty())
    cout<<"No elements in the Queue"<<endl;
    else{
        int j=0;
        while(!q2.empty()&& j<10){
            cout<<q2.front()<<endl;
            q2.pop();
            j++;
        }
    }
}