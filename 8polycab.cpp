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
   int n;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++){
       cin>>v[i];
   }
   if(v[n-1]==n||v[0]==n){
       for(int i=n-1;i>=0;i--){
           cout<<v[i]<<" ";
       }
       cout<<endl;
   }
   else{
       cout<<"-1"<<endl;
   }
    }

     return 0;
}