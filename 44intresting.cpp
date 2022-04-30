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
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int flag=1;
        int i=0;
        int j=1;
        while(j<n){
            if((abs(a[j]-a[i]))>=2){
                flag=0;
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<j+1<<endl;
                break;
            }
            i++;
            j++;
        }
        if(flag){
            cout<<"NO"<<endl;
        }
    }
     return 0;
}