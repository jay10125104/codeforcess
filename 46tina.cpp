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
        int m,n;
        cin>>m>>n;
        vector<int>ans;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int mid = m-1-i;
                int mid2 = n-1-j;
                ans.push_back(max(i,mid)+max(j,mid2));

            }
        }
        sort(ans.begin(),ans.end());
        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
     return 0;
}