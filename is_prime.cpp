#include <iostream> 
using namespace std; 

// Prime numbers: 2, 3, 5, 7, 11, 13, 17, 23

int main() 
{ 
	int n;
	bool isPrime = true;

	cout << "Enter an integer: ";
	cin >> n;

	// 0 and 1 are not prime numbers
	if(n < 2) 
		isPrime = false; 

	for(int i = 2; i <= n / 2; i++) {
		if(n % i == 0) {
			isPrime = false;
			break;
		}		
	}

	(isPrime) ? cout <<  n << " is a prime number!" : cout << n << " is not a prime number";

	return 0; 
} 
