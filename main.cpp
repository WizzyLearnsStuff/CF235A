#include<iostream>

using namespace std;

// 14
const int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43};

long long int consec_lcm(long long int n) {
	if (n < 3) return n;
	if (n % 2 == 1) return ((n * (n - 1)) * (n-2));
	// n >= 4 && n is even
	if (n % 3 == 0) return (n - 1) * (n - 2) * (n - 3);
	else return n * (n - 1) * (n - 3);
}

int main() {
	long long n;
	cin >> n;
	if (n < 3) {
		cout << n;
		return 0;
	}
	cout << consec_lcm(n);
	return 0;
}
