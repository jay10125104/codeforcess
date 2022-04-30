#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define for0(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define pb push_back
#define sz(x) sizeof(x)
int main(){
    int m,n,h;
    cin>>m>>n>>h;
    vector<int>one(n,0);
    vector<int>two(m,0);
    for(int i=0;i<n;i++){
        cin>>one[i];
    }
    for(int i=0;i<m;i++){
        cin>>two[i];
    }
    vector<vector<int>>v(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]){
v[i][j]=min(one[j],two[i]);
            }
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
     return 0;
}