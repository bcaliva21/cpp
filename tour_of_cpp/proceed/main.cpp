#include <iostream>

using namespace std;

bool accept()
{
	cout << "Do you want to proceed (y or n)?\n";

	char answer = 0;
	cin >> answer;

	switch (answer) {
	case 'y':
		cout << "You chose y\n";
		return true;
	case 'n':
		cout << "You chose n\n";
		return false;
	default:
		cout << "I'll take that for a no.\n";
		return false;
	}
}

int main()
{
	accept();

	return 0;
}

