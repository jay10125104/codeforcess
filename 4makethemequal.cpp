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
        char c;
        cin>>c;
        string s;
        cin>>s;
        vector<int>ans;
        int count=0;
        int x=-1;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                count++;
                x = i;
            }
        }
        if(count==n){
            cout<<"0"<<endl;
        }
        else if((x+1)>n/2){
            cout<<1<<endl;
            cout<<x+1<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<n<<" "<<n-1<<endl;
        }
    }
     return 0;
}