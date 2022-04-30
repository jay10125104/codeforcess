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
        vector<int>b(n);
        vector<int>v;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b.begin(),b.end());
        if(a==b){
            cout<<0<<endl;
            continue;
        }
        if(a[n-1] - a[n-2] <0)


    }
     return 0;
}