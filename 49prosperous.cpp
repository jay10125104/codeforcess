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
    if(n%2){
        int mid=n/2;
        while(mid--){
            ans+='8';
        } 
        ans+= '4';
    
    }
    else{
        int mid=n/2;
        while(mid--){
            ans+='8';
        }
    }
    

    if(ans.size()>18){
cout<<-1<<endl;
return 0;    }
    cout<<ans;
     return 0;
}
