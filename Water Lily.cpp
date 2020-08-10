#include<bits/stdc++.h>
using namespace std;

int main(){
    float depth;
    float h, l;
    cin>>h>>l;
    depth=((double)(l*l-h*h))/(2*h);
    cout<<setprecision(8)<<depth;
    return 0;

}
