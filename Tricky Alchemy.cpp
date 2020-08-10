#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long a, bl, y=0, b=0, ans=0, c;
    cin>>a>>bl;
    for(int i=0; i<3; i++){
        cin>>c;
        if(i==0) y+=2*c;
        if(i==1){
            y+=c;
            b+=c;
        }
        if(i==2){
            b+=3*c;
        }
    }
    //cout<<y<<" "<<b<<endl;
    if(y>a) ans+=y-a;
    if(b>bl) ans+=b-bl;
    cout<<ans;
    return 0;
}
