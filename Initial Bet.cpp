#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    int a, s=0;
    for(int i=0; i<5; i++){
        cin>>a;
        s+=a;
    }
    if(s!=0 && s%5==0) cout<<s/5;
    else cout<<-1;
    return 0;
}
