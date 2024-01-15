#include <iostream>

using namespace std;

void doPrint()
{
	cout << "In doPrint()\n";
}

int main()
{
	cout << "Starting main()\n";
	doPrint();
	doPrint();
	cout << "Ending main()\n";

	return 0;
}
