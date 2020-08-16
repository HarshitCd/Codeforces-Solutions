#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int c=0;
    cin>>s;
    if(count(s.begin(), s.end(), '1')==s.size()){
        for(int i=0; i<s.size()-1; i++) cout<<s[i];
    }
    else{
        for(auto x: s){
            if(c==0 && x=='0'){c++; continue;}
            cout<<x;
        }
    }
    return 0;
}
