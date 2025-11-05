#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int b[100];

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        b[x]++;
    }

    for(int i=0;i<100;i++){
        if(b[i]==1) cout<<b[i]; 
    }

    return 0;
}