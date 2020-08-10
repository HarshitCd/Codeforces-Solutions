#include<bits/stdc++.h>
using namespace std;

int main(){
    long long k, i=0, c=1, ans=0;
    vector<string> v(5);
    v[1] = "Sheldon";
    v[2] = "Leonard";
    v[3] = "Penny";
    v[4] = "Rajesh";
    v[0] = "Howard";

    cin>>k;
    while(ans<k){
        if(i>0 && i%5==0) c*=2;
        ans+=c;
        i++;
    }

    cout<<v[i%5];
    return 0;
}
