#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=0, f=0;
    cin>>n;
    vector<int> arePrime;
    arePrime.push_back(2);
    arePrime.push_back(3);
    for(int i=4; i<=n; i++){
        f=0;
        for(int x: arePrime){
            if(i%x==0){
                f++;
            }
        }
        if(f==0) arePrime.push_back(i);
        if(f==2) ans++;
    }
    cout<<ans;
    return 0;
}
