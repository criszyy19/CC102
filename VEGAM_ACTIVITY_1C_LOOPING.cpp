#include <iostream>

using namespace std;

int main ()
{
	int row = 5;
	for (int i = 0; i < row; i++) {
		for (int j = 1; j <= i; j++) {
			cout << " ";
			
		}
		for (int k = row; k > i; k--) {
			cout << "#";
		}	
		cout << endl;
	}
		return 0;
	}		