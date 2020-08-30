#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k;
    cin>>t;
    while(t--){
        int i=0, c=1;
        cin>>n>>k;
        string s(n, 'a');
        while(i<k) i+=c++;
        c--;
        s[c]='b';
        if(i==k) s[c-1]='b';
        else{
            i-=c;
            s[k-i-1]='b';
        }
        reverse(s.begin(), s.end());
        cout<<s<<endl;
    }
    return 0;
}
