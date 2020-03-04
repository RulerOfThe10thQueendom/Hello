#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "Your Name: "; //
	getline(cin, name);
	cout << "Hello, " << name << "!" << endl;
}