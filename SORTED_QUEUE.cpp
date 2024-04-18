// You are using GCC
#include<iostream>
using namespace std;
int queue[100];
int top=-1;
void in(int data){
    top++;
    queue[top]=data;
}
void sort(int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(queue[i]>queue[j]){
              temp=queue[i];
              queue[i]=queue[j];
              queue[j]=temp;
            }
        }
    }
}
void dis(int n){
    cout<<"Sorted queue: "<<endl;
    for(int i=0;i<n;i++){
        cout<<queue[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        in(a);
    }
    sort(n);
    dis(n);
}