#include <iostream>

using namespace std;

int double_value(int num)
{
	return num * 2;
}

int triple_value(int num)
{
	return num * 3;
}

int main()
{
	int x{};
	cout << "Enter an integer: \n";
	cin >> x;
	cout << "Double that number is: " << double_value(x) << '\n';
	cout << "Triple that number is: " << triple_value(x) << '\n';

	return 0;
}
