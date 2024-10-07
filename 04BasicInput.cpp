#include <iostream>

using namespace std;

int main()
{
	string name;
	string Course, School;
	
	cout << "Nickname:";
	cin >> name;
	cout << "Course year level:";
	cin >> Course;
	cout << "Your School:";
	cin >> School;
	
	cout << "Wow Congrats" << name << "! " << Course << " is a nice course and you are studying'\n";
	cout << "in " << School << " which is one of the Center of exellence in teritary Education"<<endl;
	
	return 0;
}	