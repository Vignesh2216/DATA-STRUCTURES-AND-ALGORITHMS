// You are using GCC
#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> q1;
    int num,data;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>data;
        q1.push(data);
    }
    cout<<"The priority queue elements are:"<<endl;
    while(!q1.empty()){
        cout<<q1.top()<<" ";
        q1.pop();
    }
}