#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
    	for(int k=5;k>i;k--){
    		cout<<" ";
		}
        for (int j = 1; j <= i; j++) {
            if (i == rows || j == 1 || j == i) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
    return 0;
}

