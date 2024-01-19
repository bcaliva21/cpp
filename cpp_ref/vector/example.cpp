#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = {8, 4, 5, 9};

	v.push_back(6);
	v.push_back(9);

	auto it = v.begin();
	it = v.insert(it, 420);

	v[2] = -1;

	for (int n : v)
		std::cout << n << '\n';
	std::cout << '\n';
	std::cout << "expect: [420,8,-1,5,9,6,9] \n";

	std::cout << "capacity before loop: " << v.capacity() << '\n';

	for (int i = 0; i < 20; ++i) {
		v.push_back(i);
	}

	std::cout << "capacity after: " << v.capacity() << '\n';
}
