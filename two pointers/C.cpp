#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    int n,m;
	cin >> n >> m;
	vector<int>a(n),b(m);
	unordered_map<int,int>mp;
	for(int i = 0;i < n;i++){
	    cin >> a[i];
	}
	for(int i = 0;i < m;i++){
	    cin >> b[i];
	    mp[b[i]]++;
	}
	int i = 0,ans = 0,res = 0;
	for(int j = 0;j < m;j++){
	    while(i < n && a[i] <= b[j]){
	        if (a[i] == b[j]) res++;
	        i++;
	    }
	    ans += res * mp[b[j]];
	    res = 0;
	}
	cout << ans;
}
