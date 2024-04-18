// You are using GCC
#include<iostream>
using namespace std;
int main()
{
    int num,i,hash,j,data;
    cin>>num;
    int hashTable[num];
    for(i=0;i<num;i++)
    {
        hashTable[i]=-1;
    }
    for(i=0;i<num;i++)
    {
        cin>>data;
        hash = data%num;
        if(hashTable[hash]==-1)
        hashTable[hash]=data;
        else
        {
            j=1;
            while(hashTable[hash]!=-1)
            {
                hash = (data + j) % num;
                if(hashTable[hash]==-1)
                {
                    hashTable[hash]=data;
                    break;
                }
                j++;
            }
        }
    }
    for(i=0;i<num;i++)
    {
        cout<<hashTable[i]<<" ";
    }
}