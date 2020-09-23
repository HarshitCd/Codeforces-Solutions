#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, m, c, mx=0, ch1, ch2;
    pair<int, int> p={1,1};
    cin>>n>>k;
    vector<string> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(v[i][j]=='.'){
                c=0; ch1=0; ch2=0; m=1;
                while(j+m<n && v[i][j+m]!='#' && m<k) m++;
                ch1+=m;
                if(m==k) c++;
                m=1;
                while(j-m>=0 && v[i][j-m]!='#' && m<k) m++;
                ch1 = max(0, ch1+m-k);
                if(m==k) c++;
                m=1;
                while(i+m<n && v[i+m][j]!='#' && m<k) m++;
                ch2+=m;
                if(m==k) c++;
                m=1;
                while(i-m>=0 && v[i-m][j]!='#' && m<k) m++;
                ch2 = max(0, ch2+m-k);
                if(m==k) c++;

                if(mx<ch1+ch2){
                    mx=ch1+ch2;
                    p.first = i+1;
                    p.second = j+1;
                }
            }
        }
    }
    cout<<p.first<<" "<<p.second;
    return 0;
}
