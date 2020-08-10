#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<char> vow = {'a', 'e', 'i', 'o', 'u'};
    int k, i, c=0;
    cin>>k;
    for(i=5; i<=k/2; i++){
        if(k%i==0 && k/i>=5) break;
    }
    if(i>k/2) cout<<-1;
    else{
        int a=k/i;
        for(int i=0; i<k; i++){
            if(i%a==0) c++;
            cout<<vow[(i+c)%5];
        }
    }
    return 0;
}
