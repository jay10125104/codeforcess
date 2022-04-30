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
        int m,n;
        cin>>m>>n;
        char a[m][n];
        // char b[n][m];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                char x;
                cin>>x;
                a[i][j]=x;
                
            }

        }
       
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<m;j++){
               if(a[j][i]=='*'){
                    count++;
                    a[j][i]='.';
                }
                else if(a[j][i]=='o' && count){
                    int k = j-1;
                    // cout<<k<<" ";
                    while(count!=0){
                        a[k][i]='*';
                        k--;
                        count--;
                    }
                    count=0;
                }
            }
            if(count){
                int k = m-1;
                while(k-- && count){
                    a[k][i]='*';
                    count--;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

    }
     return 0;
}