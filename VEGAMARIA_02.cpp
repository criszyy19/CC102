#include <iostream>

using namespace std;

int main()
{
	int age;
	
	cout << "Enter the age: ";
	cin >> age;
	
	if (age <16) {
		cout << "Too young to drive." <<endl;
	}
	else if (age ==16){
		cout << "Better clear the road." <<endl;
	}
	else if (age >=16) {
		cout << "You are the getting pretty old." <<endl;
	}	
	
	return 0;
}