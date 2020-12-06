#include <iostream> 
using namespace std; 

// The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21

int main() 
{ 
	int limit;	// number limit
	long long n0 = 0, n1 = 1, nth = 0;	

	do {
		cout << "Enter limit for Fibonacci sequence: ";
		cin >> limit;
	} while(limit <= 1);

	cout << "Fibonacci sequence: " << n0 << " " << n1 << " ";
	nth = n0 + n1;

	while(nth < limit) {
		cout << nth << " ";
		n0 = n1;
		n1 = nth;
		nth = n0 + n1;
	}

	return 0; 
} 