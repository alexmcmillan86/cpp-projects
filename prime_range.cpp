#include <iostream> 
using namespace std; 

// function prototype
bool checkPrime(int num);

int main() 
{ 
	int start, end;
	int count = 0;

	cout << "Enter the starting number: ";
	cin >> start;
	cout << "Enter the end number: ";
	cin >> end;

	for (int j = start; j <= end; j++) {
		if (checkPrime(j)) {
			cout << j << " ";
			count++;
		}
	}
	
	cout << "\nThere are " << count << " prime numbers in your selected range";

	return 0; 
}

bool checkPrime(int num) {
	bool isPrime = true;
	
	if (num < 2) isPrime = false;
	for (int i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
			isPrime = false;
			break;
		}
	}

	return isPrime;
}
