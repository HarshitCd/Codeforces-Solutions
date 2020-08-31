#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    string s="";
    cin>>k;

    if(k>36) cout<<-1;
    else{
        for(int i=0; i<k/2; i++) cout<<8;
        if(k%2) cout<<4;
    }
    return 0;
}
