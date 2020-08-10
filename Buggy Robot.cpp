#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, i=0, x=0, y=0;
    map<char, int> m;
    vector<int> v(1);
    string s;
    cin>>n>>s;
    while(i<n){
        if(s[i]=='R') x++;
        else if(s[i]=='L') x--;
        else if(s[i]=='U') y++;
        else y--;
        i++;
    }
    cout<<n-abs(x)-abs(y);
    return 0;
}
