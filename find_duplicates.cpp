#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

void findDuplicates(int arr[], int len) {   
    bool ifPresent = false;
 	vector<int> result;	        // ArrayList to store the output
 
    for(int i = 0; i < len - 1; i++) {
        for(int j = i + 1; j < len; j++) {
            if(arr[i] == arr[j]) {
                // Checking if element is present in the ArrayList or if not present then break
                auto it = find(result.begin(), result.end(), arr[i]);

				// Value has been found in Results vector (Duplicate already found)                  
                if(it != result.end()) { 
                    break;
				} else {
					result.push_back(arr[i]);
					ifPresent = true;
				}
			}
        }
    }
 
    // If duplicates is present then print ArrayList
    if(ifPresent == true) {
        for(auto num : result) {
			cout << num << " ";
		}
    } else
        cout << "No duplicates present";
}
 
int main() {
    int arr[] = { 12, 11, 40, 12, 5, 6, 5, 12, 11 };
    int len = sizeof(arr) / sizeof(arr[0]);
 
    findDuplicates(arr, len);
 
    return 0;
}