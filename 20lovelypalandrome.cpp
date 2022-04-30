#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define for0(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define pb push_back
#define sz(x) sizeof(x)
int main(){
    string s;
    cin>>s;
    string t = s;
    reverse(t.begin(),t.end());
    cout<<s+t<<endl;
     return 0;
}