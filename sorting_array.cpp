#include <iostream>
#include <cmath>
using namespace std; 

int main() 
{ 
	int arr[] = { 15, 32, 5, 17, 9, 11, 24, 101, 29, 300, 23 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int count = 0;

	while(count < (pow(len, 2) - len) / 2) {	// selection sort, steps required 1/2(n^2 - n)
		int p = 0;
		for(int i = p; i < len - 1; i++) {
			count++;
			if(arr[i] > arr[i + 1]) 
				swap(arr[i], arr[i + 1]);
		}
		p++;
	}

	cout << "Sorted in ascending order: ";
	for(int num : arr)
		cout << num << " ";

	return 0; 
} 
