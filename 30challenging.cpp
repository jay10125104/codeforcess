#include<bits/stdc++.h>
using namespace std;
#define ll long longint
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
        long long int a[n];
        for(long long int i=0;i<n;i++){
            cin>>a[i];
        }
        long long int i=0;
        long long int j=1;
        long long int one=-1;
        long long int two=-1;
        long long int mx = INT_MAX;
        sort(a,a+n);
        while(j<n){
if((a[j]-a[i])<mx){
    mx = (a[j]-a[i]);
    one = i;
    two=j;
}
i++;
j++;

        }
        vector<long long int>v(n,0);
        v[0]=a[one];
        v[n-1] = a[two];
        long long int idx = n-2;
        for(long long int i = one-1;i>=0;i--){
            v[idx] = a[i];
            idx--;
        }
        idx=1;
        for(long long int i=two+1;i<n;i++){
v[idx] = a[i];
idx++;
        }
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;

    }
     return 0;
}