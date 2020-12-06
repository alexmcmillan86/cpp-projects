#include <iostream> 
#include <vector>
using namespace std; 

int main() 
{ 
	vector<int> v { 1, 2, 3, 4, 5 };
	int sum = 0;

	for(int num : v)
		sum += num;

	cout << "Sum of elements = " << sum;

	return 0; 
}