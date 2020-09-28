#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, mi=0, mx=0, i=0, j=0;
    string s, t;
    cin>>n>>s>>t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    while(i<n && j<n){
        if(s[i]>t[j]){j++; mi++;}
        else{i++; j++;}
    }

    i=0; j=0;
    while(i<n && j<n){
        if(s[i]<t[j]){i++; j++; mx++;}
        else j++;
    }

    cout<<mi<<endl<<mx;
    return 0;
}
