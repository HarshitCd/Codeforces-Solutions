#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    char h='R', v='U';
    cin>>s>>t;


    int n=t[0]-s[0];
    if(n<0){h='L'; n*=-1;}
    int m=t[1]-s[1];
    if(m<0){v='D'; m*=-1;}

    cout<<min(n, m)+abs(m-n)<<endl;

    while(n!=0 && m!=0){
        cout<<h<<v<<endl;
        n--;
        m--;
    }

    while(n!=0){
        cout<<h<<endl;
        n--;
    }
    while(m!=0){
        cout<<v<<endl;
        m--;
    }

    return 0;
}
