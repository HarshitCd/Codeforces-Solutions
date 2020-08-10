#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(3);
    cin>>v[0]>>v[1]>>v[2];

    int a = sqrt(v[0]*v[2]/v[1]);
    int b = sqrt(v[0]*v[1]/v[2]);
    int c = sqrt(v[1]*v[2]/v[0]);
    cout<<4*(a+b+c);
    return 0;
}
