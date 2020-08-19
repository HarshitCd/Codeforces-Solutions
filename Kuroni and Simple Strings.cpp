#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, j, n, c=0;
    string s;
    vector<int> l, r;
    cin>>s;
    i=0; n=s.size(), j=n;
    while(true){
        while(i<n && i<j && s[i]!='(') i++;
        while(j>=0 && i<j && s[j]!=')') j--;
        if(i>=j) break;
        else{
            c++;
            l.push_back(++i);
            r.push_back(j--+1);
        }

    }
    if(c==0) cout<<c;
    else{
        cout<<1<<endl<<2*c<<endl;
        for(i=0; i<c; i++) cout<<l[i]<<" ";
        for(i=c-1; i>=0; i--) cout<<r[i]<<" ";
    }
    return 0;
}
