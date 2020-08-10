/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, p, l, r;
    string s;
    cin>>n>>p>>s;
    l=p-1;
    r=n-p;
    if(l<r){
        while(p-->1){
            cout<<"LEFT\n";
        }
    }
    else{
        while(p++<n){
            cout<<"RIGHT\n";
        }
    }
    if(p==1){
        for(int i=0; s[i]!='\0'; i++){
            cout<<"PRINT "<<s[i];
            if(s[i+1]!='\0') cout<<"\nRIGHT\n";
        }
    }
    else{
        for(int i=n-1; i>=0; i--){
            cout<<"PRINT "<<s[i];
            if(i-1!=-1) cout<<"\nLEFT\n";
        }
    }
    return 0;
}
*/
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>

#define D(x) cout << #x " is " << x << endl

using namespace std;

template <class T> string toStr(const T &x)
{ stringstream s; s << x; return s.str(); }

template <class T> int toInt(const T &x)
{ stringstream s; s << x; int r; s >> r; return r; }

int n, k;
string slogan;

int
main() {
  cin >> n >> k;
  cin >> slogan;
  double mid = (double) (slogan.size() + 1) / 2.0;
  if (k > mid) {
    k--;
    while (k + 1 < n) {
      puts("RIGHT");
      k++;
    }
    while (k >= 0) {
      printf("PRINT %c\n", slogan[k--]);
      if (k >= 0) puts("LEFT");
    }
  }
  else {
    k--;
    while (k - 1 >= 0) {
      puts("LEFT");
      k--;
    }
    while (k < n) {
      printf("PRINT %c\n", slogan[k++]);
      if (k < n) puts("RIGHT");
    }
  }
  return 0;
}
