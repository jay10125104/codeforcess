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
        long long int a,b;
        cin>>a>>b;
        if(b==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            long long int x = a*b;
            long long int y = a*b + a;
            cout<<a<<" "<<x<<" "<<y<<" "<<endl;
        }
    }
     return 0;
}