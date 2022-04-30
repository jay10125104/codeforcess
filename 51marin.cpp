#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define for0(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define pb push_back
#define sz(x) sizeof(x)
ll op1(ll a, ll b, ll m) { a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll op2(ll a, ll b, ll m) { a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll op3(ll a, ll b, ll m) { a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int main(){
    int times;
    cin>>times;
    while(times--){
        int n;
        cin>>n;
        if(n%2){
            cout<<0<<endl;
        }
        else{
            int mid = n/2;
            int mul=1;
            for(int i=1;i<=mid;i++){
                mul = op2(i,mul,998244353);
            }
            for(int i=1;i<=mid;i++){
                mul = op2(i,mul,998244353);
            }
            cout<<mul<<endl;
            
        }
    }
     return 0;
}