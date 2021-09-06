#include<iostream>
using namespace std;

long long periodic(long long m) {
	long long a = 0, b = 1, c = a + b;
	for (int i = 0; i < m*m; i++) {
		c = (a + b) % m;
		a = b;
		b = c;
		if (a == 0 && b == 1)
			return i + 1;
	}
}

int solve(long long n, long long m) {
	long long remainder = n % periodic(m);

	long long first = 0;
	long long second = 1;

	long long res = remainder;

	for (int i = 1; i < remainder; i++) {
		res = (first + second) % m;
		first = second;
		second = res;
	}

	return res % m;
}

long long huge_fibonacci(long long n) {
	int last_digit_of_nPlus2 = solve(n + 2, 10);
	int last_digit_of_2 = solve(2, 10);

	if (last_digit_of_nPlus2 >= last_digit_of_2)
		return (last_digit_of_nPlus2 - last_digit_of_2);
	else
		return ((10 + last_digit_of_nPlus2) - last_digit_of_2);
}

int main() {
	long long n;
	cin >> n;
	cout << huge_fibonacci(n) << endl;
}
