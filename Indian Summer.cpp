#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string> l;
    string s;
    int n;
    cin>>n;
    for(int i=0; i<n+1; i++){
        getline(cin, s);
        l.insert(s);
    }
    cout<<l.size()-1;
    return 0;
}
