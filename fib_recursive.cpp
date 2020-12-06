#include <iostream> 
using namespace std; 

// The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21

int recursive_fib(int n);

int main() 
{ 
	int n;

	do {
		cout << "Enter number of terms to display in Fibonacci sequence: ";
		cin >> n;
	} while(n < 1);

	cout << "Fibonacci sequence: ";

	for(int i = 0; i < n; i++) {
		cout << recursive_fib(i) << " ";
	}

	return 0; 
} 

int recursive_fib(int n) {
	if(n < 2) 
		return n;
	return (recursive_fib(n-1) + recursive_fib(n-2)); 
}