#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std; 

int main() 
{ 
	vector<int> v { 100, 254, 36, 42, 5, 10, 50, 80, 105, 256 };

	auto smallest = min_element(v.begin(), v.end());
	auto largest = max_element(v.begin(), v.end());

	cout << "Smallest element is " << *smallest << endl;
	cout << "Largest element is " << *largest;

	return 0; 
}