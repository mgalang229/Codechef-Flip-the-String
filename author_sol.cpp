#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string a;
		cin >> a;
		string b;
		cin >> b;
		int cnt = 0;
		// start from position 1 and visit the characters in the odd position
		for (int i = 0; i < (int) a.size(); i += 2) {
			// check if the character from string 'a' does not match the 
			// corresponding character in string 'b'
			if (a[i] != b[i]) {
				// if yes, then accumulate/group all the characters that are in the
				// same state into a single block (only one operation is required to change these)
				while (i < (int) a.size() && a[i] != b[i]) {
					// skip counting by 2 in order to visit all the odd positions (characters)
					// until it encounters a character that matches the character in string 'b'
					i += 2;
				}
				// increment 'cnt' (one operating per substring)
				cnt++;
			}
		}
		// do the same but start in position 2
		for (int i = 1; i < (int) a.size(); i += 2) {
			if (a[i] != b[i]) {
				while (i < (int) a.size() && a[i] != b[i]) {
					i += 2;
				}
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
