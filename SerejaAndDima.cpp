#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a=0, b=0, i, j=0;
    cin>>n;
    vector<int> v(n);
    for(i=0; i<n; i++) cin>> v[i];
    i--;
    while(i>=j){
        a+=(v[i]>v[j])?v[i--]:v[j++];
        if(i<j) break;
        b+=(v[i]>v[j])?v[i--]:v[j++];
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}
