#include<bits/stdc++.h>
using namespace std;

int main(){

    string a, b;
    int c=0, d=0;
    cin>>a>>b;
    //scanf("%s", a.c_str());
    //scanf("%s", b.c_str());

    int i=a.size(), j=b.size();
    while(a[c]=='0' && a[c]!='\0') c++;
    while(b[d]=='0' && b[d]!='\0') d++;
    //cout<<i-c<<" "<<j-d<<endl;
    if(i-c>j-d) cout<<">";
    else if(i-c<j-d) cout<<"<";
    else{
        while(i-1>=c && j-1>=d){
            if(a[c]==b[d]){c++; d++;}
            else if(a[c]>b[d]){cout<<">"; break;}
            else {cout<<"<"; break;}
        }
        if(i-1<c && j-1<d) cout<<"=";
    }

    return 0;
}
