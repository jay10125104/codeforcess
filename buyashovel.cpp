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
    int k;
    cin>>k;
    int flag = 1;
    for(int i=1;i<=9;i++){
        
        if((i*n - k)%10==0 || (i*n)%10==0){
            cout<<i<<endl;
            flag = 0;
            break;
        }
    }
    if(flag ==1){
        cout<<10<<endl;
    }
     return 0;
}