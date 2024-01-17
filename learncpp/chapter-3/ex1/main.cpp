#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>
#include <iostream>

int get_user_input()
{
	PLOGD << "get_user_input() called"; // PLOGD is defined by the plog library
	
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;

	return x;
}

int main()
{
	plog::init(plog::debug, "Logfile.txt"); // init the logger
	PLOGD << "main() called"; // output to the log as if you were writing to the console
	
	int x{ get_user_input() };
	std::cout << "You entered: " << x << '\n';

	return 0;
}
