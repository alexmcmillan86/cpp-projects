#include <iostream> 
using namespace std; 

// The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21

int main() 
{ 
	int n;	// number of terms
	long long n0 = 0, n1 = 1, nth;	

	do {
		cout << "Enter number of terms to display in Fibonacci sequence: ";
		cin >> n;
	} while(n < 1);

	cout << "Fibonacci sequence: ";

	for(int i = 0; i < n; i++) {
		if(i == 0 || i == 1)  cout << i << " ";
		nth = n0 + n1;
		n0 = n1;
		n1 = nth;
		cout << nth << " ";
	}

	return 0; 
} 