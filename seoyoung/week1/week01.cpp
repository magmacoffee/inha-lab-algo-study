#include <iostream>
#include <stack>
using namespace std;


/* stack 미사용
int main() {
	string text[j];
	int i, j, num, cnt = 0;

	cin >> num;

	for (i = 0; i < num; i++) {
		cin >> text;

		for (j = 0; j < (int)text.length(); j++) {
			if (text[j] == '(')
				cnt += 1;
			else if (text[j] == ')') {
				cnt -= 1;
			}
		}
	}

	if (cnt != 0) {
		cout << "NO" << endl;
	}
	else
		cout << "YES" << endl;

	return 0;
}
*/

// stack 사용
int main() {
	string text;
	int i, j, num;

	for (i = 0; i < num; i++) {
		cin >> text;

		stack<char> t;
		for (j = 0; j < (int)text.length(); j++) {
			if (text[i] == '(') {
				t.push('(');
			}
			else if (t.empty()) {
				cout << "NO" << endl;
				t.pop();
			}
		}

		if (t.empty()) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}