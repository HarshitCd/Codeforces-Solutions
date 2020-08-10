#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, f=0, z=0, a;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>a;
        (a==5)?f++:z++;
    }
    f = f-f%9;
    if(f==0 && z!=0) cout<<0;
    else if(z==0) cout<<-1;
    else{
        while(f--) cout<<5;
        while(z--) cout<<0;
    }
    return 0;
}
