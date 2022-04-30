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
    string ans="";
    int x = n/4;
    int y = n%4;
    string s = "abcd";
    while(x--){
ans+="abcd";
    }
    ans+=s.substr(0,y);
    cout<<ans;
     return 0;
}