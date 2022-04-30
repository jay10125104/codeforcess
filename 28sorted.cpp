#include<bits/stdc++.h>
using namespace std;
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
        sort(a,a+n);
        long long int i,j;
        if(n%2){
            i=n/2;
            j=n/2;
        }
        else{
            i=n/2-1;
            j=n/2; 
        }
        vector<long long int>ans;
        while(i>=0 && j<n){
            if(i==j){

ans.push_back(a[j]);
j++;
i--;
continue;
            }
ans.push_back(a[j]);
ans.push_back(a[i]);
j++;
i--;
        }
        // cout<<i<<" "<<j;
        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
     return 0;
}