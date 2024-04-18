// You are using GCC
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int ver,edg,p1,p2,i,j;
    cin>>ver>>edg;
    vector<int> v1[ver];
    for(i=0;i<edg;i++){
        cin>>p1>>p2;
        v1[p1].push_back(p2);
        v1[p2].push_back(p1);
    }
    for(i=0;i<ver;i++){
        if(v1[i].empty())
        cout<<i;
        else{
            cout<<i<<" -> ";
            for(j=0;j<v1[i].size()-1;j++){
                cout<<v1[i][j]<<" -> ";
            }
            cout<<v1[i][j];
        }
        cout<<endl;
    }
}