#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, i;
    cin>>n;
    int j=n;
    map<int, int> m;
    for(i=0; i<n; i++){
        cin>>a;
        m[a]=i;
    }
    i=0;
    while(j!=0){
        while(m[j]>i){cout<<endl; i++;}
        cout<<j<<" ";
        j--;
    }
    return 0;
}
