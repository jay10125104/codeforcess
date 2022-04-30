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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    int flag=1;
    int zero=0;
    for(int i=0;i<n;i++){
        if(flag==1 && a[i]==1) {
            flag=0;
        }
        else if(a[i]==0 && flag==0){
            zero++;
        }
        else if(flag==0 && a[i]==1){
            count+=zero;
            zero=0;
        }
    }
    if(flag==0 && count==0){
cout<<1<<endl;
    }
    else
    cout<<count<<endl;

     return 0;
}