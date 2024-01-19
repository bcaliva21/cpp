#include <iostream>

using namespace std;

void print(int num) 
{
	cout << num << "\n";
}

void print(double fnum)
{
	cout << fnum << "\n";
}

void print(string s)
{
	cout << s << "\n";
}

int main() {
	print(420);
	print(4.20);
	print("four twenty");
}
