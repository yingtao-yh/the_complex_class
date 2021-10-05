#ifndef COMPL_H
#define COMPL_H
#include<iostream>
using namespace std;

class Complex {
public:
	Complex() = default;
	Complex(double real, double imag);
	double real() { return m_real; }
	double imag() { return m_imag; }
	Complex(const Complex& rhs) :m_real(rhs.m_real), m_imag(rhs.m_imag){}
	~Complex() {}
	void set(double, double);
	static void add(Complex& a, Complex& b);
	static void sub(Complex& a, Complex& b);
	static void mul(Complex& a, Complex& b);
	static void div(Complex& a, Complex& b);
	friend ostream& operator<<(ostream& os, const Complex& rhs);
private:
	double m_real;
	double m_imag;
};



#endif