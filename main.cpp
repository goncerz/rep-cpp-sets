#include <iostream>
#include <set>
using namespace std;


int main() {
	int Q, y, x;
	set<int> s;

	cin >> Q;
	for (int i = 0; i < Q; i++) {
		cin >> y >> x;

		switch (y) {
		case 1:
			s.insert(x);
			break;
		case 2:
			s.erase(x);
			break;
		case 3:
			if (s.find(x) != s.end()) {
				cout << "Yes" << endl;
			}
			else {
				cout << "No" << endl;
			}
			break;
		default:
			break;
		}
	}

	return 0;
}