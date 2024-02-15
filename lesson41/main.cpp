#include <iostream>

using namespace std;

int main() {
	bool a = true;
	int b = 2;
	string c = "GDhfsrth";
	char s = 'q';
	double d = 3.5;
	float i = 3.5;
	cout << sizeof(a) << endl << sizeof(b) << endl << sizeof(c) << endl << sizeof(s)<<endl << sizeof(d) << endl<< sizeof(i) << endl;

	bool* pa;
	int* pb;
	string* pc;
	char* ps;
	double* pd;
	float* pi;
	cout << sizeof(pa) << endl << sizeof(pb) << endl << sizeof(pc) << endl << sizeof(ps) << endl << sizeof(pd) << endl << sizeof(pi) << endl;


	return 0;
}