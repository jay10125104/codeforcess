#include<bits/stdc++.h>
using namespace std;
#define ll long long long long int
#define for0(i,n) for(long long int i=0;i<n;i++)
#define vi vector<long long int>
#define pb push_back
#define sz(x) sizeof(x)
int main(){
    long long int times;
    cin>>times;
    while(times--){
        long long int n;
        cin>>n;
        vector<long long int>a;
        long long int sum=0;

        for(long long int i=0;i<n+2;i++){
            long long int x;
            cin>>x;
a.push_back(x);
            sum+=x;
        }
        
        long long int x = n+2;
        sort(a.begin(),a.end());
        if((sum-(a[n+1] + a[n])) == a[n]){
            for(long long int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else{
            long long int idx=-1;
            for(long long int i=0;i<=n;i++){
                if((sum-(a[i]+a[n+1]) )== a[n+1]){
                    idx = i;
                    break;
                }
            }
            // cout<<idx;
            if(idx!=-1){
                for(long long int i=0;i<=n;i++){
                    if(i!=idx){
                        
                    
                        cout<<a[i]<<" ";
                    }
                    
                }
                cout<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }

    }
     return 0;
}