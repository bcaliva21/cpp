#include <iostream>

using namespace std;

int main()
{
	cout << "Enter a number, and we'll calculate the factorial of it.\n";
	cout << "Number: ";
	int n;
	cin >> n;

	int factorial;

	for (int i = 1; i < n; i++)
	{
		factorial = factorial * i;
	}

	cout << n << "! is " << factorial << ".\n";

	return 0;
}
