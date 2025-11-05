#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,t,a,b,m,n,d,fallen_apple=0,fallen_orange=0;
    cin>>s>>t>>a>>b>>m>>n;
    vector<int> apple(m),orange(n);
    for(int i=0;i<m;i++){
        cin>>apple[i];
        if(a+apple[i]>=s && a+apple[i]<=t) fallen_apple++;
    }for(int i=0;i<n;i++){
        cin>>orange[i];
        if(b+orange[i]>=s && b+orange[i]<=t) fallen_orange++;
    }
    cout<<fallen_apple<<endl;
    cout<<fallen_orange<<endl;
    return 0;
}