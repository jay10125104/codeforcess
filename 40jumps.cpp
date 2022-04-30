#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define for0(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define pb push_back
#define sz(x) sizeof(x)
int main(){
    int times;
    cin>>times;
    while(times--){
        int n;
        cin>>n;
        int i=1;
        int t = 0;
        int ans=0;
        while(t<n){
            t+=i;
            i++;
            ans++;
        }
        if(t==n){
            cout<<ans<<endl;
        }
        else if(t-n ==1){
            cout<<ans+1<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
     return 0;
}