#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    cin>>n;
    map<int, int> m;
    m[4] = 0;
    m[8] = 1;
    m[15] = 2;
    m[16] = 3;
    m[23] = 4;
    m[42] = 5;

    vector<int> v(6);
    for(int i=0; i<n; i++){
        cin>>a;
        if(a==4) v[0]++;
        else if(v[m[a]-1]>v[m[a]]) v[m[a]]++;
    }

    cout<<n-v[5]*6;
    return 0;
}
