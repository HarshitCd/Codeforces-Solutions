#include<bits/stdc++.h>
using namespace std;

int main(){
    int x[2], y[2], h, v;
    for(int i=0; i<2; i++) cin>>x[i]>>y[i];
    h = abs(x[0]-x[1]);
    v = abs(y[0]-y[1]);

    if(h==v && h==0) cout<<-1;
    else if(h!=v && h!=0 && v!=0) cout<<-1;
    else{
        if(h==v){
            cout<<x[1]<<" "<<y[0]<<" "<<x[0]<<" "<<y[1];
        }
        else{
            if(h==0){
                cout<<x[0]+v<<" "<<y[0]<<" "<<x[0]+v<<" "<<y[1];
            }
            if(v==0){
                cout<<x[0]<<" "<<y[0]+h<<" "<<x[1]<<" "<<y[1]+h;
            }
        }
    }
    return 0;
}
