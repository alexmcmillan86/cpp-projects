#include <iostream> 
#include <string>
using namespace std; 

void reverse_str(string &s);

int main() 
{ 
	string str = "This is a test string";
	reverse_str(str);
	cout << str;

	return 0; 
} 

void reverse_str(string &s) {
	int len = s.length();
	for(int i = 0; i < len / 2; i++) {
		swap(s[i], s[len - i - 1]);
	}
}

	// string str;
	// cout << "Enter a sentence: ";
	// getline(cin, str);
	// int n = str.length();

	// cout << "Your sentence backwards is: ";

	// for(int i = n; i >= 0; i--) {
	// 	cout << str[i];
	// }