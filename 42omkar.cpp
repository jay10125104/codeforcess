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
        int a;
        cin>>a;
        if(a%2==0){
            cout<<a/2<<" "<<a/2<<endl;
        }
        else{
            int mid=0;
            int x=0;
             for(int i=2;i<=sqrt(a);i++){
                if(a%i==0){
                    if((a/i)>x){
                        x=a/i;
                        
                        mid=1;
                    }
                }
            }
            if(mid){
                cout<<x<<" "<<a-x<<endl;
            }
            else{
                cout<<1<<" "<<a-1<<" "<<endl;
            }
        }
    }
     return 0;
}