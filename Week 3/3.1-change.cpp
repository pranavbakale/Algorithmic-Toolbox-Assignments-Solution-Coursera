#include<iostream>
using namespace std;
int main()
{
	int val;
	cin >> val;
	int sum = 0;
	sum += val / 10;
	sum += (val % 10) / 5;
	sum += ((val % 10) % 5);
	cout << sum << endl;
}
