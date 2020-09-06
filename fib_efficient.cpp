#include <iostream>
#include <vector>
using namespace std;

// given n calculate F(n)

long long int FibList(long long int n) {
	vector<long long int> arr(n);
	arr[0] = 0;
	arr[1] = 1;
	for (long long int i = 2; i <= n; ++i) {
		arr[i] = arr[i-1] + arr[i-2];
	}
	return arr[n];
}

int main () {
	long long int n;
	cin >> n;
	cout << FibList(n) << endl;
	return 0;
}
