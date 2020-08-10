#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;
    int w_sum=0, b_sum=0;
    map<char, int>m;
    m['q']=9; m['r']=5;
    m['b']=3; m['n']=3;
    m['p']=1;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cin>>c;
            //if(c=='.') continue;
            if(c>='a' && c<='z') b_sum+=m[c];
            else{
                c=tolower(c);
                w_sum+=m[c];
            }
        }
    }
    //cout<<b_sum<<" "<<w_sum<<endl;
    if(w_sum==b_sum) cout<<"Draw";
    else if(w_sum>b_sum) cout<<"White";
    else cout<<"Black";
    return 0;
}
