#include <bits/stdc++.h>
using namespace std;
int main() {
    int k, n;
    cin>>k>>n;

    int row=(k-1)/n;
    int col=(k-1)%n;

    if (row-1>=0) cout<<(row-1)*n+col+1<<" ";
    if (col+1<n) cout<<row*n+(col+1)+1<<" ";
    if (row+1<n) cout<<(row+1)*n+col+1<<" ";
    if (col-1>=0) cout<<row*n+(col-1)+1<<" ";

    return 0;
}