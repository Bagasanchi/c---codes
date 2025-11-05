#include<bits/stdc++.h>
using namespace std;
int main(){
    int galacticus=0,s=0;
    vector<int> a(100);
    for(int i=0;i<100;i++) cin>>a[i];
    for(int i=0;i<100;i++) galacticus=max(galacticus,a[i]);
    for(int i=0;i<100;i++) if(a[i]==galacticus)s++;
    cout<<"ХИ нь "<<galacticus<<"ба тэр нь "<<s<<" ширхэг байна.";
    return 0;
}
// 3. A[100] хүснэгт өгөгдсөн. ХИ тоог олоод хүснэгтэд хэдэн ширхэг байгааг тоол.