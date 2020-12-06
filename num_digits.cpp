#include <iostream> 
using namespace std; 

int main() 
{ 
	long long int n;
	int count = 0;

	cout << "Enter an integer: ";
	cin >> n;

	while(n != 0) {
		n /= 10;
		count++;
	}

	cout << "Number of digits is " << count;

	return 0; 
} 
