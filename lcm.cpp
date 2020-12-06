#include <iostream> 
using namespace std; 

int main() 
{ 
    int n1, n2, hcf, lcm;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    int max = (n1 > n2) ? n1 : n2;

    while(true) {
        if(max % n1 == 0 && max % n2 == 0) {
            cout << "LCM = " << max;
            break;
        } else {
            max++;
        }
    }

	return 0; 
} 

	//int min = (n2 > n1) ? n1 : n2;
    
    // for (int i = 1; i <=  min; ++i) {
    //     if (n1 % i == 0 && n2 % i ==0) {
    //         hcf = i;
    //     }
    // }

    // cout << "HCF = " << hcf << endl;
    // cout << "LCM = " << (n1 * n2) / hcf;