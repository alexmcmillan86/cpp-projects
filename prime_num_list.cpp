#include <iostream> 
using namespace std; 

// function prototype
bool checkPrime(int num);

int main() 
{ 
	int total;
	int count = 0, j = 1;

	cout << "Enter the number of primes to display: ";
	cin >> total;

	while(count < total) {
		j++;
		if(checkPrime(j)) { 
			cout << j << " ";
			count++;
		}
	}

	return 0; 
}

bool checkPrime(int num) {
	bool isPrime = true;
	
	for(int i = 2; i <= num / 2; i++)
		if(num % i == 0) {
			isPrime = false;
			break;
		}

	return isPrime;
}
