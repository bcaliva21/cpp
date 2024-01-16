#include <iostream>

#define PRINT_BRADLEY

int main()
{
#ifdef PRINT_BRADLEY
	std::cout << "Bradley\n";
#endif

#ifdef PRINT_BOB
	std::count << "Bob\n";
#endif

	return 0;
}

