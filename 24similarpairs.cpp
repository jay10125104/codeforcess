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
        int even=0;
        int odd=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2){
                odd++;
            }
            else{
                even++;
            }
        }
        if(n%2){
            cout<<"NO"<<endl;
        continue;
        }
        int pair=0;
        int i=0;
        int j=1;
        sort(a,a+n);
        if(odd%2==0 && even%2==0){
            cout<<"YES"<<endl;
            continue;
        }
        while(j<n){
            if(a[j]-a[i]==1){
                i+=2;
                j+=2;
                pair++;
            }
            else{
                i++;
                j++;
            }
        }
        if((odd%2==1 && even%2==1) && pair){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
     return 0;
}