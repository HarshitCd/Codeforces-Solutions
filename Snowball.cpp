#include<bits/stdc++.h>
using namespace std;

int main(){
    int w, h;
    cin>>w>>h;
    int u1, u2, d1, d2;
    cin>>u1>>d1;
    cin>>u2>>d2;
    for(int i=h; i!=0; i--){
        w+=i;
        if(i==d1) w = (w-w1)<0?0: w-w1;
        else if(i==d2) w = (w-w2)<0?0: w-w2;
    }
    cout<<w;
    return 0;
}
