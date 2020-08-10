#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, i=2;
    vector<int> v;
    cin>>n>>k;
    //int m=k;
    while(k!=0 && n!=1){
        if(n%i==0){n/=i; k--; v.push_back(i);}
        else{i++;}
    }

    if(k!=0) cout<<-1;
    else{v[0]*=n; for(int x: v) cout<<x<<" ";}
    return 0;
}

