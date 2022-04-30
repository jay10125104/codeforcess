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
    string s;
    cin>>s;
    vector<int>v(26,0);
    for(int i=0;i<s.size();i++){
v[s[i]-'a']++;
    }
    int ans=0;
    for(int i=0;i<26;i++){
        if(v[i]){
            ans+=(v[i]-1);
        }

    }
    if(s.size()>26){
        cout<<-1<<endl;
    }
    else if(ans<26)
    cout<<ans;
    else
    cout<<-1<<endl;
     return 0;
}