#include <iostream>
#include <vector>
using namespace std; 

int main() 
{ 
	int cycles = 0;
	int arr[] = { 1, 2, 3, 4, 5 };
	vector<int> v (arr, arr + (sizeof(arr) / sizeof(arr[0])));

	cout << "Enter number of cycles: ";
	cin >> cycles;

	for(int i = 0; i < cycles; i++) {
		auto last = v.back();
		v.pop_back();
		v.insert(v.begin(), last);
	}

	// Printing the vector
	for(auto num: v) 
		cout << num << " ";

	return 0; 
} 
