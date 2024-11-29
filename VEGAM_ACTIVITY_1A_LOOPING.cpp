#include <iostream>

using namespace std;

int main ()
{
	for (int i = 1; i <= 8; i++) {
		
		if (i % 2 != 0) {
			cout << " ";
		}

	for (int j = 1; j <= 4; j++) {
	  for (int c = 1; c% 2 != 0; c++){	
			cout << "# * ";
		}
	}	
	cout << endl;
	
	    }
return 0;
}		