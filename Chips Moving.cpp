#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, e=0, o=0;
    long long ans=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        (a%2==0)?e++ : o++;
    }
    cout<<min(e, o);
    return 0;
}
