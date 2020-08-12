#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, l;
    double a=0, m;
    cin>>n>>l;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());

    m=v[0];
    m = 2*max(m, double(l-v[n-1]));

    for(int x: v){
        a = (x-a);
        m = max(m, a);
        a = x;
    }

    printf("%.10f", m/2);
    return 0;
}
