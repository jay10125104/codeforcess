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
        vector<long long int>b;
        
        for(long long int i=0;i<n;i++){
            long long int x;
            cin>>x;
            a.push_back(x);
            b.push_back(x);
        }
        sort(b.begin(),b.end());
        if(a==b){
            cout<<0<<endl;
            continue;
        }
        
        if(a[n-1]<a[n-2]){
                cout<<-1<<endl;
                continue;
        }
        if(a[n-1]<0){
            cout<<-1<<endl;
            continue;
        }
        cout<<n-2<<endl;
        for(long long int i=0;i<n-2;i++){
            cout<<i+1<<" "<<n-1<<" "<<n<<endl;
        }
    }
     return 0;
}