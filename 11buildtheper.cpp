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
        int a,b;
        cin>>a>>b;
        if(a+b+2 > n){
            cout<<-1<<endl;
        }
        else if(abs(b-a)>1){
            cout<<-1<<endl;
        }
        else{
            
        }
    }
     return 0;
}