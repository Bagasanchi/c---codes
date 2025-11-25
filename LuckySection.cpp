#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int q[15] = {4,7,47,74,44,77,447,474,477,744,747,774,444,777};
    for(int i=0;i<15;i++){
        if(n%q[i]==0){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}   