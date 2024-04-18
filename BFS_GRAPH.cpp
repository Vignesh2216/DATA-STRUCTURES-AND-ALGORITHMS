// You are using GCC
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int num,ver,edg,i,j,x,y;
    cin>>num;
    while(num-->0){
        cin>>ver>>edg;
        queue<int> q1;
        vector<int> v1[ver];
        int vis[ver]={0};
        for(i=0;i<edg;i++){
            cin>>x>>y;
            v1[x].push_back(y);
        }
        q1.push(0);
        vis[0]=1;
        for(i=0;i<ver;i++){
            int size=v1[i].size();
            if(vis[i]==1){
                if(size>0){
                    for(j=0;j<size;j++){
                        if(vis[v1[i][j]]!=1){
                            q1.push(v1[i][j]);
                            vis[v1[i][j]]=1;
                        }
                    }
                }
            }
        }
        while(!q1.empty()){
            cout<<q1.front()<<" ";
            q1.pop();
        }
        cout<<endl;
    }
}