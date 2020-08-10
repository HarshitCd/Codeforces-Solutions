#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    set<int> s;
    cin>>n;
    s.insert(n);
    n++;
    while(find(s.begin(), s.end(), n)==s.end()){
        if(n%10!=0){if(n%10!=0) s.insert(n); n+=1;}
        while(n%10==0){n/=10;}
    }
    cout<<s.size();
    return 0;
}
