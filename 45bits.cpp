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
        long long int n,k;
        cin>>n>>k;
        int bit1 = log2(n);
        int bit2 = log2(k);

       
        long long int sol=-1;
        for(long long int i=18;i>=0;i--){
            long long int count=0;
            for(long long int j=n;j<=k;j++){
                if(j&(1<<i)){
                    count++;
                }
            }
          sol=max(sol,count);
            

        }
        cout<<(k-n+1) - sol<<endl;
    }
     return 0;
}