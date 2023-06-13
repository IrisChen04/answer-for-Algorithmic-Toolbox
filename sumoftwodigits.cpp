#include <iostream>
using namespace std;
main() {
	int a = 0;
	int b = 0;
	cin >> a;
	if (a <= 9 && a >= 0) {
		cin >> b;
		if (b <= 9 && b >= 0) {
			cout << a + b;
		}
	}
	return 0;
}