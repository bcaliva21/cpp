#include <iostream>

using namespace std;

int add(int x, int y); // forward declaration of add() (using a function declaration)

int main()
{
	cout << "The sum of 3 and 4 is: " << add(3,4) << '\n'; // only works because of our forward declaration on line 4

	return 0;
}

int add(int x, int y)
{
	return x + y;
}
