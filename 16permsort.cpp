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
        vector<int>a(n);
        vector<int>b;
        // int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b.push_back(a[i]);
        }
        sort(b.begin(),b.end());
        
        if(b==a){
            cout<<0<<endl;
        }
        else if(a[0]==b[0]||b[n-1]==a[n-1]){
            cout<<1<<endl;
        }
        else if(a[0]==b[n-1] && a[n-1]==b[0]){
            cout<<3<<endl;
        }
        else{
            cout<<2<<endl;
        }

    }
     return 0;
}