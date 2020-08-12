#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    map<int, int> m;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a==50){
            if(m[25]==0){cout<<"NO"; return 0;}
            else m[25]--;
        }
        else if(a==100){
            if(m[50]!=0 && m[25]!=0){m[50]--; m[25]--;}
            else if(m[25]>=3) m[25]-=3;
            else{cout<<"NO"; return 0;}
        }
        m[a]++;
    }
    cout<<"YES";
    return 0;
}
