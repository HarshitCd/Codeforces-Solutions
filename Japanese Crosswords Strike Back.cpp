#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, a;
    long long s=0;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>a;
        s+=a+1;
    }
    s--;
    //cout<<s<<endl;
    if(s==x) cout<<"YES";
    else cout<<"NO";
    return 0;
}
