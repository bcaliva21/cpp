#include <iostream>

using namespace std;

int get_value_from_user()
{
	cout << "Enter an integer: ";
	int x{};
	cin >> x;
	return x;
}

int main()
{
	int x{ get_value_from_user() };
	int y{ get_value_from_user() };

	cout << x << " + " << y << " = " << x + y << '\n';
	return 0;
}
