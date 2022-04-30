#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
        long long int k;
        cin>>k;
        if(n%2==0 && n%4!=0){
            ll mid = n/2 - 1; 
            cout<<mid<<" "<<mid<<" "<<2<<endl; 
        }
        else if(n%4==0){
            ll tk = n/2;
            ll tkk = n/4;
            cout<<tk<<" "<<tkk<<" "<<tkk<<endl;
        }
        else{
            ll tt = floor(n/2);
            cout<<1<<" "<<tt<<" "<<tt<<" "<<endl;
        }
    }
     return 0;
}