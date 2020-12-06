#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 

int main() 
{ 
	vector<int> v { 15, 32, 5, 17, 9, 11 };

	sort(v.begin(), v.end());
	cout << "Sorted smallest to largest: \n";
	for (auto n : v) {
		cout << n << " ";
	}

	cout << endl << endl;

	sort(v.begin(), v.end(), greater<int>());
	cout << "Sorted largest to smallest: \n";
	for (auto n : v) {
		cout << n << " ";
	}

	return 0; 
} 
