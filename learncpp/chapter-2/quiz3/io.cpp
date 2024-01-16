#include <iostream>

int read_number()
{
        std::cout << "Enter an integer: ";
        int input{};
        std::cin >> input;

        return input;
}

void write_answer(int answer)
{
        std::cout << "The sum of the two values is: " << answer << '\n';
}

