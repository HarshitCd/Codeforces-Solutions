#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, i, j;
    cin>>n>>m;
    vector<int> a(n), b(m);
    for(i=0; i<n; i++) cin>>a[i];
    for(i=0; i<m; i++) cin>>b[i];
    int bestPossible = n;
   	if (bestPossible > m) bestPossible = m;
   	for(int i = bestPossible; i >= 0; i--) {
   	 	bool ok = true;
   	 	for(int j = 0; j < i; j++)
   	 	 	if (a[j] > b[m - i + j]) ok = false;
   		if (ok) {
   			printf("%d", n - i);
   			return 0;
   		}
   	}
    return 0;
}
