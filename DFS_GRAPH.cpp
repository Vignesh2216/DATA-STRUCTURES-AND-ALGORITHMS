// You are using GCC
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    int num;
    cin>>num;
    while(num-->0){
        int v,e,i,j,x,y;
        cin>>v>>e;
        vector<int> v1[v];
        queue<int> q1;
        int vis[v]={0};
        for(i=0;i<v;i++){
            vis[v]=0;
        }
        q1.push(0);
        for(i=0;i<e;i++){
            cin>>x>>y;
            v1[x].push_back(y);
        }
        vis[0]=1;
        for(i=0;i<v;i++){
            for(j=0;j<v1[i].size();j++){
                if(vis[i]==1)
                if(v1[v1[i][j]].size()>0){
                    int size=v1[v1[i][j]].size();
                    int pos=v1[i][j];
                    if(vis[pos]!=1){
                        q1.push(pos);
                        vis[pos]=1;
                        for(int k=0;k<size;k++)
                        if(vis[v1[pos][k]]!=1){
                            q1.push(v1[pos][k]);
                            vis[v1[pos][k]]=1;
                        }
                    }
                }
                else{
                    if(vis[v1[i][j]]!=1){
                        q1.push(v1[i][j]);
                        vis[v1[i][j]]=1;
                    }
                }
            }
            while(!q1.empty()){
                cout<<q1.front()<<" ";
                q1.pop();
            }
        }
            cout<<endl;
    }
}