#include<bits/stdc++.h>
using namespace std;

int main(){
    double x, y;
    cin>>x>>y;
    if(y*log(x)<x*log(y)) cout<<"<";
    else if(y*log(x)>x*log(y)) cout<<">";
    else cout<<"=";
    return 0;
}
