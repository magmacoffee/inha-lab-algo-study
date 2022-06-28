#include <iostream>
#include <string>
using namespace std;

bool check(string* input_string) {
	int open_ = 0, close_ = 0;
	for (auto c : *input_string) {
		switch (c) {
			case '(':
				open_++;
				break;
			case ')':
				close_++;
				break;
			default:
				break;
		}
		if (open_ < close_) {
			return false;
		}
	}
	if ((open_ > close_) || (open_ == 0 && close_ == 0)) {
		return false;
	}
	else {
		return true;
	}
}

int main() {
	int cnt_line;
	string input_string;

	cin >> cnt_line;

	for (int i = 0; i < cnt_line; i++)
	{
		cin >> input_string;
		cout << (check(&input_string) ? "YES" : "NO") << endl;
	}

	return 0;
}