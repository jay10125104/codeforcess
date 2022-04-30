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
        int n,k;
        cin>>n>>k;
        int div = n/k;
        if(div==0){
            cout<<"NO"<<endl;
        }
        else if(k==1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
        }
       else{
           int num=k-1;
           int rem = n-k+1;
           if(num>0 && rem%2 && rem>0){
            cout<<"YES"<<endl;
           while(num--){
               cout<<1<<" ";
           }
           if(rem%2){
                cout<<rem<<endl;
                continue;
           }
           }
           int rem2 = n-2*(k-1);
           int num2 = (k-1);
           if(num2>0 && (rem2%2==0) && rem2>0){
            cout<<"YES"<<endl;
            while(num2--){
                cout<<2<<" ";
            }
            cout<<rem2<<endl;
            continue;
           }
           cout<<"NO"<<endl;
       }



    }
     return 0;
}   