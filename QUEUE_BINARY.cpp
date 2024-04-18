// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int b(int a){
    int d=0,e=0,i=1;
    while(a!=0){
        e=a%2;
        d=e*i+d;
        a=a/2;
        i=i*10;
    }
    return d;
}
int main(){
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
        cout<<b(i)<<endl;
    }
}