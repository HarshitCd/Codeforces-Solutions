#include<bits/stdc++.h>
using namespace std;

int Distinct_Count(string& s){
    set<char> ss;
    int n=s.size();
    for(int i=1; i<n; i+=3)
        if(s[i]!='}') ss.insert(s[i]);
    return ss.size();
}

int main(){
    string s;
    getline(cin, s);
    cout<<Distinct_Count(s);
    return 0;
}
