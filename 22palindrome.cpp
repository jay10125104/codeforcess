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
    if(n==1){
        cout<<"a"<<endl;
    }
    else if(n==2){
        cout<<"aa"<<endl;
    }
    else {
        if(n%2){
            string s="";
            int t=1;
            int x = (n-1)/2;
            while(x--){
                if(t==1){
                s+="aa";
                t=0;
                }
                else if(t==0){
                    s+="bb";
                    t=1;
                }
            }
            if(t==1)
            cout<<s+"a";
            else
            cout<<s+"b";
        }
        else{
            string s="";
            int t=1;
            int x = (n/2) ;
            while(x--){
                 if(t==1){
                s+="aa";
                t=0;
                }
                else if(t==0){
                    s+="bb";
                    t=1;
                }
            }
            
            cout<<s<<endl;
            
        }
    }
     return 0;
}