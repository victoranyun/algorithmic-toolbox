#include <iostream>
#include <vector>
using namespace std;

int main () {
	int n;
	cin >> n;
	long long int max1 = -1;
	long long int max2 = -1;
	vector<int> arr;
	for (int i = 0; i < n; ++i) {
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}
	int maxindex = 0;
	for (int i = 0; i < n; ++i) {
		if (max1 < arr[i]) {
			max1 = arr[i];
			maxindex = i;
		}
	}
	arr[maxindex] = -1;
	for (int i = 0; i < n; ++i) {
		if (max2 < arr[i])
			max2 = arr[i];
	}
	long long int result = max1 * max2;
	cout << result << endl;
}
