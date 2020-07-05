#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		string a, b, c;
		cin >> a >> b >> c;
		bool ok = true;
		for (int i = 0; i < (int) a.size(); i++) {
			if (c[i] != a[i] && c[i] != b[i]) {
				ok = false;
				break;
			}
		}
		cout << (ok == true ? "YES\n" : "NO\n");
	}
	return 0;
}
