#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define for0(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define pb push_back
#define sz(x) sizeof(x)
int main(){
    int n;
    cin>>n;
    for(int i=-n;i<=n;i++){
        int mid = n - abs(i);
        int x = abs(i);
        while(x--){
            cout<<"  ";
        }
        for(int i=0;i<mid;i++){
            cout<<i<<" ";
        }
        for(int i=mid;i>0;i--){
            cout<<i<<" ";
        }
        cout<<0<<endl;
    }
     return 0;
}