#include <iostream>
#include <vector>
using namespace std;

// Perfect number is when the sum of factors (exlcuding itself) equals the number itself

int main() 
{ 
	vector<int> factors;
	int n;
	cout << "Enter a number: ";
	cin >> n;

	// Find factors of number
	for(int i = 1; i < n - 1; i++) {
		if(n % i == 0)
			factors.push_back(i);
	}

	// Find sum of factors
	int sum = 0;
	for(auto num : factors) {
		sum += num;
	}

	if(sum == n)
		cout << "You have found a Perfect number!";
	else
		cout << "Not this time... try again";	

	return 0; 
} 
