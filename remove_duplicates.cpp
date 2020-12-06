#include <iostream>
#include <set>
using namespace std; 


void removeDuplicates(int arr[], int n) 
{  
    set<int> s; 
   
    for(int i = 0; i < n; i++) {   
        s.insert(arr[i]);
    }
   
    cout << "\nAfter removing duplicates:\n"; 
    for(auto num : s) 
        cout << num << ", "; 
    cout << endl; 
} 
  
 
int main() 
{ 
    int arr[] = { 4, 2, 3, 3, 2, 4 }; 
    int n = sizeof(arr) / sizeof(arr[0]);
   
    removeDuplicates(arr, n); 
  
    return 0; 
} 