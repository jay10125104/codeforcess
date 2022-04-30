// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int b[m][n]={0};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            b[i][j]=0;
            
        }}
    vector<pair<int,int>>v;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if((a[i][j] ) && ((i+1)<m)  && ((j+1)<n) && (a[i+1][j]) && (a[i+1][j+1]) && (a[i][j+1])){
      
                b[i][j]=1;
                  b[i+1][j]=1;
                    b[i+1][j+1]=1;
                      b[i][j+1]=1;
                v.push_back(make_pair(i,j));
                
            }
        }
    }
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<b[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int flag=0;
    for(int i=0;i<m;i++){
        if(flag==0){
        for(int j=0;j<n;j++){
            
            if(a[i][j]!=b[i][j]){
                cout<<-1<<endl;
                flag = 1;
                break;
            }
        }
        }
        }
        if(flag==0){
            cout<<v.size()<<endl;
            for(auto i:v){
                cout<<i.first + 1 <<" "<<i.second + 1 <<endl;
            }
        }
    }
    