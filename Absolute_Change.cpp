#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k==0){
            for(int i=1;i<=n;i++) cout<<i<<" ";
            cout << "\n";
            continue;
        }
        if(n%(2*k)!=0){
            cout << -1 << "\n";
            continue;
        }
        vector<int> a(n+1);
        bool add = true;
        for(int i=1;i<=n;i++){
            if(add) a[i]=i+k;
            else a[i]=i-k;
            if(i%k==0) add = !add;
        }
        for(int i=1;i<=n;i++) cout<<a[i]<<" ";
        cout<<"\n";    
    }
    return 0;
}