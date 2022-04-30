#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define for0(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define pb push_back
#define sz(x) sizeof(x)
int main(){
    int n;
    cin>>n;
    int t;
    cin>>t;
    vector<int>a(n,0);
    int k=1;
    for(int i=0;i<n;i+=2){
        a[i]=k;
        k++;
    }
    k=n;
    for(int i=1;i<n;i+=2){
        a[i] = k;
        k--;
    }
    
    int mid = t;
    // if(mid==1){
    //     for(int i=1;i<=n;i++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    //     exit(0);
    // }
    if(mid%2==0){
    sort(a.begin()+mid-1,a.end(),greater<int>());
    }
    else
{
    sort(a.begin()+mid,a.end());
}
    for(auto i:a){
        cout<<i<<" ";
    }
    

     return 0;
}