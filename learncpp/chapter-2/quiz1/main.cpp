#include <iostream>

using namespace std;

int get_integer();

int main()
{
	int x{ get_integer() };
	int y{ get_integer() };

	cout << x << " + " << y << " = " << x + y << "\n";

	return 0;
}

