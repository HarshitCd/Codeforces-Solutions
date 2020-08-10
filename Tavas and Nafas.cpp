#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, string> m;
    m[0]="";
    m[1]="one";
    m[2]="two";
    m[3]="three";
    m[4]="four";
    m[5]="five";
    m[6]="six";
    m[7]="seven";
    m[8]="eight";
    m[9]="nine";
    m[10]="ten";
    m[11]="eleven";
    m[12]="twelve";
    m[13]="thirteen";
    m[14]="fourteen";
    m[15]="fifteen";
    m[16]="sixteen";
    m[17]="seventeen";
    m[18]="eighteen";
    m[19]="nineteen";
    m[20]="twenty";
    m[30]="thirty";
    m[40]="forty";
    m[50]="fifty";
    m[60]="sixty";
    m[70]="seventy";
    m[80]="eighty";
    m[90]="ninety";
    int n;
    cin>>n;
    int c = n/10;
    c*=10;
    if(n==0) cout<<"zero";
    else if(n<=19) cout<<m[n];
    else if(n%10==0) cout<<m[n];
    else cout<<m[c]<<"-"<<m[n%10];
    return 0;
}
