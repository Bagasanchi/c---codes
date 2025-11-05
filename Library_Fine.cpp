#include<bits/stdc++.h>
using namespace std;
int main(){
    int d,m,y,d1,m1,y1,pay=0;
    if (!(cin>>d>>m>>y)) return 0;
    if (!(cin>>d1>>m1>>y1)) return 0;
    if (y<y1 || (y==y1 && m<m1) || (y==y1 && m==m1 && d<=d1)) {
        cout << 0 << "\n";
        return 0;
    }
    if(y>y1){
        cout<<10000<<"\n";
        return 0;
    }
    if(m>m1){
        cout<<(m-m1)*500<<"\n";
        return 0;
    }else cout << (d - d1) * 15 << "\n";
    return 0;
}