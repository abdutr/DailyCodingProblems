#include <iostream>
#include <map>
using namespace std;
bool solve_problem(int* arr,int size,int target) {
	map<int, int> deposit;
	for (int i = 0; i < size; i++) {
		if (deposit[arr[i]] == 1) return 1;
		else {
			deposit[target - arr[i]] = 1;
		}
	}
	return 0;
}

int main() {
	int arr[1001];
	for (int i = 0; i < 1001; i++) {	
		arr[i] = i * i;
	}
	cout << solve_problem(arr, 1001,1998001)<<endl;
	cout << "Test";
	return 1;
}

