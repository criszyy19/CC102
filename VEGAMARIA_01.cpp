#include <iostream>

using namespace std;

int main()
{
	int temperature;
	
	cout << "Enter the temperature:";
	cin >> temperature;
	
	if (temperature <32 ){
		cout << "Bring the heavy jacket:" << endl;
	}
	else if (temperature >=32 && temperature <= 50){
		cout << "Bring a light jacket." << endl;	
	}	
	else{
		cout << "Not to bring any jacket." << endl;
	}
	
	return 0;
}