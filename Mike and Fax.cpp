#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin>>s>>n;
    int m = s.size();
    if(m%n!=0) cout<<"NO";
    else{
        for(int j=0; j<n; j++){
            for(int i=0; i<m/(2*n); i++){
                if(s[i+j*m/n]!=s[(j+1)*m/n-1-i]){cout<<"NO"; return 0;}
            }
        }
        cout<<"YES";
    }
    return 0;
}
