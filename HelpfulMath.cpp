#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;
    cin>>s;
    vector<char> c;
    n=s.size();
    for(int i=0; i<n; i+=2)
        c.push_back(s[i]);
    sort(c.begin(), c.end());
    n=c.size();
    for(int i=0; i<n-1; i++) cout<<c[i]<<"+";
    cout<<c[n-1];
    return 0;
}
