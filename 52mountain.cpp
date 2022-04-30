#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define for0(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define pb push_back
#define sz(x) sizeof(x)
ll op1(ll a, ll b, ll m) { a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll op2(ll a, ll b, ll m) { a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll op3(ll a, ll b, ll m) { a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
 bool sol(vector<int>& arr) {
     if(arr.size()==2){
         return false;
     }
        int i=0;
        int j=1;
        int count=1;
        while(j<arr.size() && i<arr.size()){
            if(arr[i]==arr[j]){
                return false;
            }
            else if((arr[j]-arr[i])<0 && count){
                count--;
                int x=i;
                i=j;
                j=x;
                if(j==0){
                    return false;
                }
            }
            
            else if((arr[j]-arr[i]<0)&& count==0){
                return false;
            }
            cout<<arr[i]<<" "<<arr[j]<<endl;
            
            i++;
            j++;
        }
        if(count==0)
        return true;
        else
        return false;
    }
int main(){
    
    int times;
    cin>>times;
    while(times--){
        int n;
        cin>>n;
        vector<int>v;
        set<int>s;
        for(int i=0;i<n;i++){
            int x;
             cin>>x;
             v.push_back(x); 
             s.insert(x);    
        }
        vector<int>ans=v;
        sort(ans.begin(),ans.end());
        if(v==ans && s.size()==n){
            cout<<"YES"<<endl;
            continue;
        }
        else{
            ans=v;
            reverse(ans.begin(),ans.end());
            if(sol(v) || sol(v)){
                cout<<"YES"<<endl;
                
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    
     return 0;
}