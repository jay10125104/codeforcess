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
        string s;
        cin>>s;
        int size = n;
        int  count=0;
        string mid="";
        for(int i=0;i<s.size();i++){
            mid+=s[i];
            if(mid == "()" || mid == "((" || mid=="))"){
                count++;
                mid="";
                size-=2;
            }
            else if(mid.size()>=2){
                if(s[i]==')'){
                    count++;
                    size -=(mid.size());
                    mid="";
                }
            }
        }
        cout<<count<<" "<<size<<endl; 
        
            }
     return 0;
}