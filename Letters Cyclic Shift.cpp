#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int i, n=s.size();

    if(count(s.begin(), s.end(), 'a')==n){s[n-1] = 'z';}
    else{
        for(int i=0; i<n; i++){
            if(s[i]!='a'){
                for(int j=i; j<n && s[j]!='a'; j++) s[j]--;
                break;
            }
        }
    }
    cout<<s;
    return 0;
}
