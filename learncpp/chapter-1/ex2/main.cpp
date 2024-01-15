#include <iostream>

using namespace std;

void undefined_behavior()
{
	int x;
	cout << x << "\n";
}

void implementation_defined_behavior()
{
	cout << sizeof(int) << '\n';
}

int main()
{
	/* undefined_behavior(); */

	implementation_defined_behavior();
	
	return 0;
}
