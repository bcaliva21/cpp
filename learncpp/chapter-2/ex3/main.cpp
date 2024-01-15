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
	int x { get_value_from_user() };

	cout << "Double your value is :" << x * 2 << '\n';

	return 0;
}
