#include<bits/stdc++.h>
using namespace std;

int main(){
    double n, r, ans, a, pi = 2*acos(0);
    cin>>n>>r;

    a = 360/n;
    a = a*pi/360;

    double sine = sin(a);
    ans = r*sine/(1-sine);

    printf("%.7f", ans);
    return 0;
}
