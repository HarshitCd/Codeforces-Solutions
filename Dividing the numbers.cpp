#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    int a=1+n%2, j=0, k=n;
    vector<int> v;
    if(a==2) v.push_back(1);
    while(n!=a+1){
        if(j%2==0){
            v.push_back(a);
            v.push_back(n);
        }
        a++; n--; j++;
    }

    if(j%2==0) v.push_back(a);
    if(j%2==0 && k%2==1) cout<<0;
    else if(j%2==0 && k%2==0) cout<<1;
    else if(j%2==1 && k%2==0) cout<<0;
    else cout<<1;
    cout<<endl;

    cout<<v.size()<<" ";
    for(int x: v) cout<<x<<" ";
}

int main(){
    int n;
    cin>>n;

    solve(n);
    return 0;
}
