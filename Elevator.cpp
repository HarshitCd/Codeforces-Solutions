#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, n;
    cin>>s>>n;
    if(s=="front" && n=="1") cout<<"L";
    else if(s=="front" && n=="2") cout<<"R";
    else if(s=="back" && n=="2") cout<<"L";
    else cout<<"R";
    return 0;
}
