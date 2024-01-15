#include <iostream>

using namespace std;

void doB()
{
	cout << "Starting doB()\n";

	cout << "Ending doB()\n";
}

void doA()
{
	cout << "Starting doA()\n";

	doB();

	cout << "Ending doA()\n";
}

int main()
{
	cout << "Starting main()\n";

	doA();

	cout << "Ending main()\n";

	return 0;
}
