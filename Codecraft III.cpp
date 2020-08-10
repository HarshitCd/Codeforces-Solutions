#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i=0;
    string s;
    unordered_map<string, int> m;
    vector<string> v(12);
    v[0]="January";
    v[1]="February";
    v[2]="March";
    v[3]="April";
    v[4]="May";
    v[5]="June";
    v[6]="July";
    v[7]="August";
    v[8]="September";
    v[9]="October";
    v[10]="November";
    v[11]="December";
    cin>>s>>n;
    for(auto x: v){
        if(x==s) break;
        i++;
    }
    n=(i+n)%12;
    cout<<v[n];
    return 0;

}
