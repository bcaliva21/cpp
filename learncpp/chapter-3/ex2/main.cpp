#include <iostream>

#define ENABLE_DEBUG

int get_user_input()
{
#ifdef ENABLE_DEBUG
std::cerr << "get_user_input() called\n";
#endif
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

int main()
{
#ifdef ENABLE_DEBUG
std::cerr << "main() called\n";
#endif
	int x{  get_user_input() };
	std::cout << "You entered: " << x << '\n';

	return 0;
}

