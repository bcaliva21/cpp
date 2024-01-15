#include <iostream>

using namespace std;

int get_value_from_user()
{
	cout << "Enter an integer: ";
	int input{};
	cin >> input;

	return input;  // return the value of the input back to the caller
}

int main()
{
	cout << get_value_from_user() << '\n'; // where does the returned value get stored?

	return 0;
}

