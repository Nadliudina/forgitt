#include <iostream>

using namespace std;


struct Ss {
	int a=10;
	int b=-10;
};

double sS(Ss s) {
	return (double)s.a * s.b;
}

int main() {
	cout << "ee " << endl;
	system("pause");
}