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
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int i=0;
        int j;
        if(n%2){
j = (n+1)/2;
        }
        else{
            j=n/2;
        }
        vector<int>v;
       while(i<(ceil((float)(n/2)))){
            v.push_back(a[i]);
            v.push_back(a[j]);
            i++;
            j++;

        }
        if(n%2){
            v.push_back(a[n/2]);
        }
        // for(auto i:v){
        //     cout<<i<<" ";
        // }
        i =0;
        j=1;
        int count=0;
        while(j<n){
            if(v[i]!=v[j]){
            }
            else{
                count+=2;
       

            }
                i+=2;
                j+=2;
        }
        if(n%2){
            count++;
        }
        cout<<count<<endl;
        
    }
     return 0;
}