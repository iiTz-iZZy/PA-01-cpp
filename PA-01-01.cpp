#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a = 1, b = 1; 

	for (int i = 2; i <= n; i++) { 
		int tmp = a + b;
		a = b;
		b = tmp;
	}
	cout << b;
	return 0;
}
