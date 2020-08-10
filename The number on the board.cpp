#include<bits/stdc++.h>
using namespace std;

int main(){
    long long k, s=0, ans=0;
    vector<int> v(10);
    string n;
    cin>>k>>n;

    for(auto x: n){s+=x-'0'; v[x-'0']++;}
    if(s>=k){
        cout<<ans;
        return 0;
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<v[i]; j++){
            s+=9-i;
            ans++;
            if(s>=k){
                cout<<ans;
                return 0;
            }
        }
    }
    return 0;
}
