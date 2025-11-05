#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    vector<int> length(n);
    for(int q=0;q<n;q++) cin>>length[q];
    while(t--){
        int i,j,minimalist=0;
        cin>>i>>j;
        int minWidth = INT_MAX;
        for(int q=i;q<=j;q++){
            minWidth=min(minWidth, length[q]);
        }
        cout << minWidth << "\n";
    }
    return 0;
}