#include<bits/stdc++.h>
using namespace std;

int main(){
    int s, m, i=0, c=1, k, a;
    cin>>m>>s;

    vector<int> mi(m), mx(m);
    a = s/9;
    a += (s%9)? 1: 0;
    if((m!=1 && s==0) || a>m){cout<<"-1 -1"; return 0;}
    if(m==1 && s==0){cout<<"0 0"; return 0;}
    mi[m-1] = 1;
    while(i<s/9){
        mi[i]+=9;
        mx[m-1-i]+=9;
        i++;
    }

    if(s%9!=0){
        mi[i]+=s%9;
        mx[m-i-1]+=s%9;
    }

    (i==m || i*9>s-1)? mi[i-1]--: mi[i]--;
    for(int i=m-1; i>=0; i--) cout<<mi[i];
    cout<<" ";
    for(int i=m-1; i>=0; i--) cout<<mx[i];
    return 0;
}
