#include <iostream> 
using namespace std;

int fact(int n);

int main() { 
	int n;
	cout << "Enter a positive integer: ";
	cin >> n;

	cout << n << "! is " << fact(n);

	return 0; 
} 

int fact(int n) {
	if(n <= 1) 		// 0! = 1, 1! = 1
		return 1;	
	return n * fact(n - 1); 
}