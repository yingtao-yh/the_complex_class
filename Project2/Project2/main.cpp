#include"compl.h"
using namespace std;
int main() {
	Complex com(1.0, 2.0);
	Complex com1(3.0, 4.0);
	cout<<com<< endl;
	Complex::add( com ,com1);
	Complex::sub(com, com1);
	Complex::mul(com, com1);
	Complex::div(com, com1);
}
