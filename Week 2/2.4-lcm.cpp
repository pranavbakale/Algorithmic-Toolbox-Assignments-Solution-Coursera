#include<iostream>
using namespace std;
long long gcd(long long a, long long b) {
	while (b) {
		long long temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

long long lcm(long long a, long long b) {
	return a / (long long)(gcd(a, b))* b;
}
int main() {
	int a, b;
	cin >> a >> b;
	cout << lcm(a, b) << endl;
}
