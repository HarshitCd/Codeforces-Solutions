#include<bits/stdc++.h>
using namespace std;

void Key_Race(int s, int v1, int v2, int p1, int p2){
    int t1=0, t2=0;
    t1=s*v1+2*p1;
    t2=s*v2+2*p2;
    if(t1==t2) cout<<"Friendship\n";
    else if(t1<t2) cout<<"First\n";
    else cout<<"Second\n";
}

int main(){
    int s, v1, v2, p1, p2;
    cin>>s>>v1>>v2>>p1>>p2;
    Key_Race(s, v1, v2, p1, p2);
    return 0;
}
