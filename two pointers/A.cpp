#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    int n,m;
	cin >> n >> m;
	vector<int>a(n),b(m),c(n+m,0);
	for(int i = 0;i < n;i++){
	    cin >> a[i];
	}
	for(int i = 0;i < m;i++){
	    cin >> b[i];
	}
	a.push_back(1e10);
	b.push_back(1e10);
	int i = 0,j = 0,k = 0;
	while(i < a.size() - 1 || j < b.size() - 1){
	    if (a[i] < b[j]){
	        c[k] = a[i];
	        k++;i++;
	    }
	    else{
	        c[k] = b[j];
	        k++;j++;
	    }
	    cout << c[k-1] << " ";
	}
}
