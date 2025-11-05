#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,max_1=-10000,max_2=-10000;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>a[i][j];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0) max_1=max(max_1,a[i][j]);
            if(j==0) max_1=max(max_1,a[i][j]);
        }
    }

    cout<<max_1;

    return 0;
}