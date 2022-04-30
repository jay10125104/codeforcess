#include<bits/stdc++.h>
using namespace std;
#define ll long long long long int
#define for0(i,n) for(long long int i=0;i<n;i++)
#define vi vector<long long int>
#define pb push_back
#define sz(x) sizeof(x)
int main(){
    long long int n;
    cin>>n;
    vector<long long int>v;
    for(long long int i=0;i<n;i++){
        long long int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    long long int i=0;
    long long int j=1;
    int count=0;
    
    // if(n==1){
    //     cout<<0<<endl;
    // }
    while(j<n){
        long long int x = v[i];
        v[i]=v[j];
        v[j]=x;
        j+=2;
        i+=2;
        count++;

    }
    if(n%2==0){
        int mid = v[n-1];
        v[n-1]=v[n-2];
        v[n-2]=mid;
    }
    if(n%2)
    cout<<count<<endl;
    else{
        cout<<count-1<<endl;
    }
    for(auto i:v){
        cout<<i<<" "; 
    }

     return 0;
}