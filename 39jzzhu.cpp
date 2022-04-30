#include<bits/stdc++.h>
using namespace std;
#define ll long long long long int
#define for0(i,n) for(long long int i=0;i<n;i++)
#define vi vector<long long int>
#define pb push_back
#define sz(x) sizeof(x)
long long int ans(long long int x){
    if(x<0){
        x = 1000000007-abs(x);
        return ans(x)%1000000007;
    }
    else{
        return x%1000000007;
    }
}
int main(){
    long long int x,y;
    cin>>x>>y;
    long long int n;
    cin>>n;
  

        long long int rem = n%3;
        long long int div = n/3;
        if((rem==0) && (div%2)){
            long long int sol = y-x;
            cout<<ans(sol)<<endl;
        }
        else if(rem==0 && (div%2==0)){
            long long int sol = x-y;
            cout<<ans(sol)<<endl;
        }
        else if((rem==1 )&& (div%2==0)){
long long int sol = x;
cout<<ans(x)<<endl;
        }
        else if((rem==1) && (div%2==1)){
            long long int sol = -x;
                cout<<ans(sol)<<endl;
        }
        else if(rem==2 && (div%2)){
            long long int sol = -y;
            cout<<ans(sol)<<endl;
        }
        else if(rem==2 && (div%2==0)){
            long long int sol = y;
            cout<<ans(sol)<<endl;
        }
    
    

     return 0;
}