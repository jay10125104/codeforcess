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
    if(s.size()==1){
        int x = s[0]-'0';
        if(x%4==0){
            cout<<4<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else{
        int k = (s[s.size()-2]-'0')*10 +  (s[s.size()-1]-'0') ;
        if(k%4==0){
            cout<<4<<endl;
        }
        else
        {
            cout<<0<<endl;
        }

    }
     return 0;
}