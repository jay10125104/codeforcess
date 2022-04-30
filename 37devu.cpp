#include<bits/stdc++.h>
using namespace std;
#define ll long long long long int
#define for0(i,n) for(long long int i=0;i<n;i++)
#define vi vector<long long int>
#define pb push_back
#define sz(x) sizeof(x)
int main(){
    long long int n,t;
    cin>>n>>t;
    long long int a[n];
    for(long long int i=0;i<n;i++){
        cin>>a[i];
    }
    long long int ans=0;
    sort(a,a+n);
    for(long long int i=0;i<n;i++){
        if(t>1){
            ans+=a[i]*t;
            t--;
        }
        else{
            ans+=a[i];
        }
    }
    cout<<ans<<endl;
     return 0;
}