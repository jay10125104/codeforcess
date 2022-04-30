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
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
       int j=n-1;
       int flag =1;
       while(j>=0){
           if(a[j]+1 != b[j] && a[j]!=b[j]){
               cout<<"NO"<<endl;
               flag =0;
               break;
           }
           j--;
       }
       if(flag){
           cout<<"YES"<<endl;
       }
    }
     return 0;
}       