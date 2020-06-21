#include <iostream>
using namespace std;

double poww(long long int a, long long int b) {
	bool isneg = 0;
	if (b < 0) {
		isneg = 1;
		b = -b;
	}
	if (b == 0) return 1;
	else if (b == 1) return a;
	double temp = poww(a, b / 2);

	if (b % 2 == 0) {
		if (isneg==0) return temp * temp;
		else return 1 / (temp * temp);
	}
	else {
		if (isneg==0) return temp * temp * a;
		else return 1 / (temp * temp * a);
	}



}
int main() {

	cout << poww(2, 200);
	cout << "hehe";
}



//long long int pow(int a, int b) {
//	long long int* results = new long long int[b];
//	results[0] = 1;
//	results[1] = a;
//	for (int i = 2; i < ceil((double)b / 2); i++) {
//	   
//	}
//	return (long long int)(pow(a, b / 2) * pow(a, ceil((double)b / 2)));
//
//
//}