#include <iostream>

int get_user_input()
{
	int input{};
	std::cout << "Enter an integer: ";
	std::cin >> input;

	return input;
}

char get_mathematical_operation()
{
	char input{};
	std::cout << "Choose an operation: ";
	std::cin >> input;

	return input;
}

int calculate_result(int x, int y, char op)
{
	switch (op) {
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	default:
		std::cout << "Please choose a valid mathematical operation:\n";
		return 0;
	}
}

void print_result(int x)
{
	std::cout << "The calculated result is " << x << '\n';
}

int main()
{
	int x{ get_user_input() };
	
	char op{ get_mathematical_operation() };

	int y{ get_user_input() };

	int result{ calculate_result(x, y, op) };

	print_result(result);
	return 0;
}
