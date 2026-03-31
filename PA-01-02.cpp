#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	float sum = 1.0;
	int delitel = 2;
	int odin = -1;

	for (int i = 1; i <= n; i++) { //1st el already exist in sum=1.0, need start from 2nd el
		sum += odin * (1.0 / delitel);
		odin *= -1;
		delitel *= 2;
	}
	cout << sum;

	return 0;
}
