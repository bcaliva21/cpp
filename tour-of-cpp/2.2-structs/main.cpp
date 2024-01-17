#include <iostream>

struct Vector {
	int sz;
	double* elem;
};

void vector_init(Vector& v, int s)
{
	v.elem = new double[s];
	v.sz = s;
}

double read_and_sum(int s)
{
	Vector v;
	vector_init(v,s);
	for (int i = 0; i != s; ++i) 
	{
		std::cin >> v.elem[i];
		std::cout << "loop one\n";
	}
	
	double sum = 0;
	for (int i = 0; i != s; ++i)
	{
		std::cout << "loop two\n";
		sum += v.elem[i];
	}
		
	return sum;
}

int main()
{
	read_and_sum(1);

	return 0;
}
