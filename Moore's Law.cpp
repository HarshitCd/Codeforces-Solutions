#include<bits/stdc++.h>
using namespace std;

double power(double s, long long t){
    double res=1;
    while(t){
        if(t%2) res*=s;
        s*=s;
        t/=2;
    }
    return res;
}

int main(){
    double n, s = 1.000000011;
    long long t;
    cin>>n>>t;
    printf("%.7lf", n*power(s, t));

    return 0;
}

