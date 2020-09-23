#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0;
    cin>>n;
    set<int> as, bs, s;
    vector<int> a(n), b(n), u(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
        u[a[i]-1]=1;
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
        if(a[i]==b[i]) s.insert(a[i]);
    }

    for(int i=0; i<n; i++){
        if(a[i]!=b[i]){
            if(c==0 && s.find(a[i])==s.end() && s.find(b[i])!=s.end()){
                cout<<a[i]<<" ";
                c=1;
            }
            else if(c==0 && s.find(a[i])!=s.end() && s.find(b[i])==s.end()){
                cout<<b[i]<<" ";
                c=2;
            }
            else if(c==0){
                 for(int j=i+1; j<n; j++){
                    if(a[j]!=b[j]){
                        if(c==0 && s.find(a[j])==s.end() && s.find(b[j])!=s.end()){
                            c=1;
                        }
                        else if(c==0 && s.find(a[j])!=s.end() && s.find(b[j])==s.end()){
                            c=2;
                        }
                        else if(c==0){
                            c=3;
                        }
                    }
                 }
                 if(c==1){cout<<b[i]<<" "; c=2;}
                 else if(c==2){cout<<a[i]<<" "; c=1;}
                 else{
                    for(int k=0; k<n; k++){
                        if(u[k]==0){
                            cout<<k+1<<" ";
                            c=2;
                            break;
                        }
                    }
                }
            }
            else if(c==1) cout<<b[i]<<" ";
            else if(c==2) cout<<a[i]<<" ";

        }

        else cout<<a[i]<<" ";
    }
    return 0;
}
