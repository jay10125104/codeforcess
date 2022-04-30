#include<bits/stdc++.h>
using namespace std;
#define ll long long long long int 
#define for0(i,n) for(long long int  i=0;i<n;i++)
#define vi vector<long long int >
#define pb push_back
#define sz(x) sizeof(x)
int  main(){
    long long int  n;
    cin>>n;
    map<int,int>m;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);

        m[x]++;
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(auto i:m){
        ans+=i.second;
    }
    ans-=m[v[0]];
    ans-=m[v[n-1]];
    if(ans>=0){
        cout<<ans<<endl;
    }
    else{
        cout<<0<<endl;
    }
     return 0;
}