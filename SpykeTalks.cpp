#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, c=0;
    cin>>n;
    map<int , int> m;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a==0 || c==-1) continue;
        m[a]++;
        if(m[a]==2) c++;
        if(m[a]==3) c=-1;
    }
    cout<<c;
    return 0;
}
