#include<bits/stdc++.h>
using namespace std;

int main(){
    int hh, mm, h, d, c, n;
    double cost = 0;
    cin>>hh>>mm>>h>>d>>c>>n;
    hh = hh*60+mm;
    if(hh>=1200){
        cost=c*0.8*h/n;
    }
    else{
        cost = min(c*0.8*h/n, c*(1200-hh)*d*h/n + c*0.8*h/n);
    }

    cout<<setprecision(4)<<cost;
    return 0;
}

