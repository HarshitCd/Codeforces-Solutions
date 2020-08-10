#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, h, m, ans=0;
    cin>>x>>h>>m;
    while(h!=7 && h!=17){
        if(m%10==7) break;
        m-=x;
        if(m<0){
            h--;
            m+=60;
        }
        if(h<0) h+=24;
        ans++;
    }
    cout<<ans;
    return 0;
}
