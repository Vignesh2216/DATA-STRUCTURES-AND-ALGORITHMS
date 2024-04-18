// You are using GCC
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int num,i,j,hash,data;
    cin>>num;
    vector<int> hashTable[3];
    for(i=0;i<num;i++){
        cin>>data;
        hash=data%3;
        hashTable[hash].push_back(data);
    }
    for(i=0;i<3;i++){
        cout<<"chain["<<i<<"]-->";
        if(hashTable[i].size()>0){
            for(j=0;j<hashTable[i].size();j++){
                cout<<hashTable[i][j]<<" -->";
            }
        }
        cout<<"NULL"<<endl;
    }
}