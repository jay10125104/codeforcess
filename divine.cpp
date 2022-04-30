#include<bits/stdc++.h>
using namespace std;
#define ll long long long long int
#define for0(i,n) for(long long int i=0;i<n;i++)
#define vi vector<long long int>
#define pb push_back
#define sz(x) sizeof(x)
bool cmp(pair<long long int,long long int>a,pair<long long int,long long int>b){
    return a.second>b.second;
}
int main(){
    long long int times;
    cin>>times;
    while(times--){
        long long int n;
        cin>>n;
        long long int a[n+1];
        vector<pair<long long int,long long int>>v;
        
        for(long long int i=1;i<=n;i++){
            cin>>a[i];
            v.push_back(make_pair(i,a[i]));
        }
      
        sort(v.begin(),v.end(),cmp);
        vector<long long int>ans(n+1,0);
        long long int k=-1;
        long long int l=1;
        long long int flag=0;
        long long int sol=0;
       for(auto i:v){
           
            if(flag==0){
            ans[i.first]=k;
            
            sol+=(abs(k)*i.second);
  
            k--;
            flag=1;
            continue;
            }
            else if(flag==1){
            ans[i.first]=l;
            sol+=(abs(l)*i.second);
            l++;
            flag=0;
            continue;
            }
            
        }
        cout<<2*sol<<endl;
        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<endl;



    }
     return 0;
}