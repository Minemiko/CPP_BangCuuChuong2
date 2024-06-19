#include <iostream>
using namespace std;

int main() {
	int n, x;
	cout << "Bang cuu chuong: ";
	for (n = 2; n <= 10; n++) {
			for (x = 1; x <= 10; x++) {
				cout << n << " * " << x << " = " << n * x << "\n";
			}
	}
	return 0;
}