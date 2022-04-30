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
        long long int n;
vector<long long int>ans;
        cin>>n;
        string mid = to_string(n);

        if(n&(n-1)==0){
            cout<<0<<endl;
            continue;
        }
        for(long long int i=0;i<64;i++){
            long long int x = pow(2,i);
            string cmp = to_string(x);
            long long int count=0;
            int p = mid.size()+cmp.size();
            for(long long int j=0;j<mid.size();j++){
                if(cmp[count]==mid[j]){
                    count++;
                }

            }
            long long int sol = p-(2*count);
            // cout<<sol<<" ";
            ans.push_back(sol);
        }
        sort(ans.begin(),ans.end());
        cout<<ans[0]<<endl;
    }
     return 0;
}