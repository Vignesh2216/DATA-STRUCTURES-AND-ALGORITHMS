// You are using GCC
// You are using GCC
#include<iostream>
#include<string>
using namespace std;
int main(){
    int ver,edg,p1,p2,val,i,j;
    cin>>ver>>edg;
    string str;
    cin>>str;
    int arr[ver][ver];
    for(i=0;i<ver;i++)
    for(j=0;j<ver;j++)
    arr[i][j]=0;
    for(i=0;i<edg;i++){
        cin>>p1>>p2>>val;
        if(str=="yes"){
            arr[p1-1][p2-1]=val;
        }
        else{
            arr[p1-1][p2-1]=val;
            arr[p2-1][p1-1]=val;
        }
    }
    for(i=0;i<ver;i++){
       for(j=0;j<ver;j++){
           cout<<arr[i][j]<<" ";
       } 
       cout<<endl;
    }
}