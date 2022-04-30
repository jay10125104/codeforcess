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
        long long int n,m;
        cin>>m>>n;
        if(m==1){
            cout<<0<<endl;
        }
        else if(m==2){
            cout<<n<<endl;
        }
        else{
            cout<<2*n<<endl;
        }
    }
     return 0;
}