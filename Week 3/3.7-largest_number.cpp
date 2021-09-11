#include<bits/stdc++.h>
using namespace std;

bool GreaterOrEqual(string& a, string& b) {
	return(b + a < a + b);
}

string maxSalary(vector<string> nums, int n)
{
    sort(nums.begin(),nums.end(),GreaterOrEqual);
    stringstream Salary;
    for (size_t i = 0; i < n; i++) {
      Salary << nums[i];
    }
    return Salary.str();
}

int main() {
	int n;
	cin >> n;
	vector<string> nums(n);
	for (size_t i = 0; i < n; i++) {
		cin >> nums[i];
	}
	cout << maxSalary(nums, n) << endl;
}
