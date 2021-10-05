#include"compl.h"
Complex::Complex(double real, double imag) :m_real(real),m_imag(imag){}

void Complex::set(double real, double imag) {
	
}
ostream& operator<<(ostream& os, const Complex& rhs) {
	os << rhs.m_real << "+" << rhs.m_imag << "i" << endl;
	return os;
}
void  Complex::add(Complex& a, Complex& b) {
	cout << a.m_real + b.m_real << "+" << a.m_imag + b.m_imag << "i" << endl;
}
void  Complex::sub(Complex& a, Complex& b) {
	cout << a.m_real - b.m_real << "+" << a.m_imag - b.m_imag << "i" << endl;
}
void  Complex::mul(Complex& a, Complex& b) {
	cout << a.m_real * b.m_real - a.m_imag * b.m_imag << "+" << a.m_real * b.m_imag + b.m_real *a.m_imag << "i" << endl;
}
void  Complex::div(Complex& a, Complex& b) {
	cout << ((a.m_real * b.m_real + a.m_imag * b.m_imag) / (b.m_real * b.m_real - b.m_imag * b.m_imag))
		<< "+" << ((a.m_imag * b.m_real - a.m_real * b.m_imag) / (b.m_real * b.m_real - b.m_imag * b.m_imag)) << "i" << endl;
}

